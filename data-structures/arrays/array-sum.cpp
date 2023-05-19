#include <iostream>
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

int sum_array(int nums[])
{
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += nums[i];
  }

  return sum;
}

int main()
{
  int *nums = get_array_input();
  cout << "Sum of the entered numbers: " << sum_array(nums) << endl;
  return 0;
}