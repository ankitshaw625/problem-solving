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

void print_reverse(vector<int> nums)
{
  cout << "Reversed Array: ";
  for (int i = nums.size() - 1; i >= 0; i--)
  {
    cout << nums[i] << " ";
  }

  cout << endl;
}

void print_array(vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
}

void reverse_array(vector<int> &nums)
{
  int start = 0, end = nums.size() - 1;

  while (start < end)
  {
    swap(nums[start], nums[end]);
    start++;
    end--;
  }
}

int main()
{
  vector<int> nums = get_array_input();
  cout << "Before Reversing: ";
  print_array(nums);
  cout << endl
       << "After Reversing: ";
  reverse_array(nums);
  print_array(nums);
  cout << endl;
  // print_reverse(nums);
  return 0;
}