#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int number = 0;

  while (number < 5)
  {
    number++;
    if (number == 2 || number == 4)
      continue;
    sum += number;
  }

  cout << "The sum is " << sum << endl;

  return 0;
}