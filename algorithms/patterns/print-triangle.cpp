#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;

  cout << "n: ";

  cin >> n;

  for (string line = "*"; line.size() < n; line += "*")
  {
    cout << line << endl;
  }

  return 0;
}
