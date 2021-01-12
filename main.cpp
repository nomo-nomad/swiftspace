#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <vector>
#include <iterator>
#include <valarray>

using namespace std;

template <typename T>
T compound(T principal, T intRate)
{
  return principal * intRate;
}

int main()
{
  vector<int> arr0;
  valarray<int> valArr0;

  valArr0 = {4, 5, 6, 7};
  arr0 = {9, 7, 8, 3, 2};
  for (auto num : valArr0)
  {
    cout << num << endl;
  }

  array<int, 5> nums = {1, 2, 3, 5, 6};

  valarray<int> newVarr = valArr0.apply([](int elem) { return elem + 2; });
  for (auto num : newVarr)
  {
    cout << num << endl;
  }

  ofstream writeFile;
  string line;
  writeFile.open("writeFile", ios::app);
  writeFile << "Hello there\n";
  writeFile.close();

  ifstream readFile;
  readFile.open("writeFile");
  while (getline(readFile, line))
  {
    cout << line << '\n';
  }
}