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

int main()
{
  int *nums = get_array_input();
  return 0;
}