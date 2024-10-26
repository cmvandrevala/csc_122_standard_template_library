#include <iostream>
#include <array>

using namespace std;

int main()
{

  // Array - A data structure that contains a set number of the same type of element
  // See https://cplusplus.com/reference/array/array/
  // See https://en.cppreference.com/w/cpp/container/array

  array<int, 5> numbers = {1, 2, 3, 4, 5};
  // Wait... array.push_back(...) does not exist... why?

  for (const int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;

  cout << "Size: " << numbers.size() << endl;

  cout << "Index 0: " << numbers[0] << endl;
  cout << "Index 0: " << numbers.at(0) << endl;

  cout << "Index 10: " << numbers[10] << endl;
  cout << "Index 10: " << numbers.at(10) << endl;
}
