#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // Vector - An array that can change its size
  // See https://cplusplus.com/reference/vector/vector/
  // See https://en.cppreference.com/w/cpp/container/vector

  vector<int> numbers = {1, 2, 3, 4, 5};
  numbers.push_back(100);
  // Wait... numbers.push_front(...) does not exist... why?

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
