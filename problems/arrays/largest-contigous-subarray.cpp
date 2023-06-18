#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cout << "n: ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int maxLen = 0;

  for (int left = 0; left < n; left++)
  {
    int minEl = arr[left], maxEl = arr[left];
    set<int> uniques{arr[left]};

    for (int right = left + 1; right < n; right++)
    {
      if (uniques.find(arr[right]) != uniques.end())
      {
        break;
      }

      uniques.insert(arr[right]);

      minEl = min(minEl, arr[right]);
      maxEl = max(maxEl, arr[right]);

      if (maxEl - minEl == right - left)
        maxLen = max(maxLen, right - left + 1);
    }
  }

  cout << maxLen << endl;

  return 0;
}
