#include <iostream>
#include <set>

using namespace std;

int main()
{
  // Set - A container that stores unique elements in a particular order
  // See https://cplusplus.com/reference/set/set/
  // See https://en.cppreference.com/w/cpp/container/set

  set<int> numbers = {1, 2, 3, 4, 5};
  // Wait... numbers.push_back(...) does not exist... why?
  // Wait... numbers.push_front(...) does not exist... why?
  // Wait... numbers[index] does not exist... why?

  numbers.insert(3);
  numbers.insert(1);
  numbers.insert(7);
  numbers.insert(5);
  numbers.insert(9);

  cout << "Size: " << numbers.size() << endl;

  for (const int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;
}
