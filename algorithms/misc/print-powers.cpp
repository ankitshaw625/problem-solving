#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int power = 1;
  int x = 3;
  int limit = 100;

  while (power <= limit)
  {
    cout << power << " ";
    power *= x;
  }

  return 0;
}
