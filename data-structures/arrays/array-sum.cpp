#include <iostream>
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

int sum_array(vector<int> nums)
{
  int sum = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
  }

  return sum;
}

int main()
{
  vector<int> nums = get_array_input();
  cout << "Sum of the entered numbers: " << sum_array(nums) << endl;
  return 0;
}