#include <iostream>
#include <vector>
using namespace std;

void printPrimes(int limit)
{
  if (limit < 2)
    return;

  vector<bool> composites(limit + 1);

  for (int i = 2; i * i <= limit; i++)
  {
    if (composites[i])
      continue;

    for (int j = i; i * j <= limit; j++)
      composites[i * j] = true;
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