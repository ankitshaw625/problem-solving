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

int main()
{
  vector<int> nums = get_array_input();
  print_reverse(nums);
  return 0;
}