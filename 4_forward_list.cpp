#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  // Forward List - Allows for constant time insert and deletion at any point in the container
  // See https://cplusplus.com/reference/forward_list/forward_list/
  // See https://en.cppreference.com/w/cpp/container/forward_list

  forward_list<int> numbers = {1, 2, 3, 4, 5};
  numbers.push_front(100);
  // Wait... numbers.push_back(...) does not exist... why?
  // Wait... numbers.size() does not exist... why?
  // Wait... numbers[index] does not exist... why?

  for (const int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;

  auto itr = numbers.begin();
  advance(itr, 1);
  numbers.insert_after(itr, 7);

  for (const int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;
}
