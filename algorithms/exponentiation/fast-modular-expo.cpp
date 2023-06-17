#include <iostream>

using namespace std;

int fastExpo(int a, long long n, int MOD)
{
  //--> (a ^ n) % MOD

  int result = 1;

  while (n)
  {
    if ((n & 1) == 0)
    {
      a = (1LL * a * a) % MOD;
      n >>= 1;
    }
    else
    {
      result = (1LL * result * a) % MOD;
      n--;
    }
  }

  return result % MOD;
}

int main()
{

  cout << fastExpo(7, 0, 1000000007);
  return 0;
}