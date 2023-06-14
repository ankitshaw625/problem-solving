#include <iostream>
using namespace std;

/// https://codeforces.com/problemset/problem/231/A
int main()
{
  int n;
  cin >> n;

  int count = 0;
  while (n--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    count += (a + b + c) >= 2;
  }

  cout << count << endl;
}