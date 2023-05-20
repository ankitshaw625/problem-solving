#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> get_array_input()
{
  int n;
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

int get_max(vector<int> nums)
{
  int max = INT_MIN;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] > max)
    {
      max = nums[i];
    }
  }

  return max;
}

int get_min(vector<int> nums)
{
  int min = INT_MAX;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] < min)
    {
      min = nums[i];
    }
  }

  return min;
}

int main()
{
  vector<int> nums = get_array_input();

  cout << "Max in the array: " << get_max(nums) << endl;
  cout << "Min in the array: " << get_min(nums) << endl;

  return 0;
}