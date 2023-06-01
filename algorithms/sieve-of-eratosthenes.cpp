#include <iostream>
#include <vector>
using namespace std;

void printPrimes(int limit)
{
  if (limit < 2)
    return;

  vector<bool> composites(limit + 1);
  composites[0] = true;
  composites[1] = true;

  for (int i = 2; i <= limit / 2; i++)
  {
    if (composites[i])
      continue;

    for (int j = 2 * i; j <= limit; j += i)
      composites[j] = true;
  }

  cout << "Primes upto " << limit << ": " << endl;
  for (int i = 2; i <= limit; i++)
  {
    if (!composites[i])
      cout << i << " ";
  }
}

int main()
{
  printPrimes(1000);
  return 0;
}