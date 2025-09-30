#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
  // Unordered Set - A container that stores unique elements in a particular order
  // See https://cplusplus.com/reference/unordered_set/
  // See https://en.cppreference.com/w/cpp/container/unordered_set

  unordered_set<int> numbers = {1, 2, 3, 4, 5};
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
