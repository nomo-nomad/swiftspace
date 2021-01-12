#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> arr0;
  vector<int> arr1;

  arr0 = {4, 5, 6, 7};
  for (auto num : arr0) {
    cout << num << endl;
  }
}