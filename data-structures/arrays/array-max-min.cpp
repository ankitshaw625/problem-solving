#include <iostream>
#include <climits>
using namespace std;

int n;

int *get_array_input()
{
  cout << "Enter the count of numbers in the array: ";
  cin >> n;

  int *nums = new int[n];
  cout << "Enter the numbers seperated by space: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  return nums;
}

int get_max(int *nums)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] > max)
    {
      max = nums[i];
    }
  }

  return max;
}

int get_min(int *nums)
{
  int min = INT_MAX;
  for (int i = 0; i < n; i++)
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
  int *nums = get_array_input();

  cout << "Max in the array: " << get_max(nums) << endl;
  cout << "Min in the array: " << get_min(nums) << endl;

  return 0;
}