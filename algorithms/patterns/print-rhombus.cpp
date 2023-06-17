#include <iostream>

using namespace std;

void printChar(char ch, int count)
{
  for (int i = 0; i < count; i++)
    cout << ch;
}

int main(int argc, char const *argv[])
{
  int n;

  cout << "n: ";

  cin >> n;

  int spaces = n / 2, stars = 1;

  for (int i = 0; i < n; i++)
  {
    printChar(' ', spaces);
    printChar('*', stars);
    printChar(' ', spaces);
    cout << endl;

    if (i < (n / 2))
    {
      spaces--;
      stars += 2;
    }
    else
    {
      spaces++;
      stars -= 2;
    }
  }

  return 0;
}
