// Name:        Justus Peterson-Rhodes
// Date:        February 11, 2019
// File:        euler-1.cpp
// Description: Find the sum of all numbers below
//              a given integer that are multiples of 3 or 5
//
//

#include <iostream>

int findMultiples(int number)
{
  int sum = 0;
  for (int i = 1; i <= number; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      sum += i;
    }
  }
  return sum;
}

int main()
{
  int num, sumOfFactors;
  std::cout << "Enter a number to sum: " << std::endl;
  std::cin >> num;
  std::cout << findMultiples(num);
  return 0;
}
