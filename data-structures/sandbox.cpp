#include <iostream>
#include <vector>
using namespace std;

int n;

vector<int> get_array_input()
{
  cout << "Enter the count of numbers in the array: ";
  cin >> n;

  vector<int> nums;
  cout << "Enter the numbers seperated by space: " << endl;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    nums.push_back(num);
  }

  return nums;
}

int main()
{
  vector<int> nums = get_array_input();
  return 0;
}