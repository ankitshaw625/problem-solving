#include <iostream>
#include <string>
#include <vector>
using namespace std;

/// https://codeforces.com/problemset/problem/71/A
int main()
{
  int n;
  cin >> n;

  vector<string> words;

  for (int i = 0; i < n; i++)
  {
    string word;
    cin >> word;
    words.push_back(word);
  }

  for (int i = 0; i < n; i++)
  {
    string word = words[i];
    int len = word.size();

    if (len > 10)
      cout << word[0] << len - 2 << word[len - 1];
    else
      cout << words[i];

    cout << endl;
  }
}