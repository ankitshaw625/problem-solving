#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> getPrimeFactors(int n)
{
  vector<pair<int, int>> factors;
  if (n == 1)
  {
    factors.push_back({2, 0});
  }

  int divisor = 2;

  while (n > 1 && divisor * divisor <= n)
  {
    int count = 0;
    while (n % divisor == 0)
    {
      n /= divisor;
      count++;
    }

    if (count > 0)
    {
      factors.push_back({divisor, count});
    }

    divisor++;
  }

  if (n > 1)
  {
    factors.push_back({n, 1});
  }

  return factors;
}

int main()
{
  int n;
  cout << "n: ";
  cin >> n;
  auto factors = getPrimeFactors(n);

  cout << endl
       << "The factors of " << n << " are: " << endl;

  for (auto item : factors)
  {
    cout << "Factor: " << item.first << ", Exponent: " << item.second << endl;
  }
}