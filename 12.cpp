//https://euler.stephan-brumme.com
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  //pone el limite a 1000 divisores
  const unsigned int MaxDivisors = 1000;
  
  vector<unsigned int> smallest;
  smallest.push_back(0);

  unsigned int index    = 0;
  unsigned int triangle = 0; 
  while (smallest.size() < MaxDivisors)
  {
    index++;
    triangle += index;

    if (smallest.size() > 300 && triangle % 10 != 0)
      continue;

    unsigned int divisors = 0;
    unsigned int i        = 1;
    while (i*i < triangle)
    {
      if (triangle % i == 0)
        divisors += 2;
      i++;
    }
    if (i*i == triangle)
      divisors++;

    while (smallest.size() <= divisors)
      smallest.push_back(triangle);
  }

    unsigned int minDivisors=500;

    cout << smallest[minDivisors + 1] << endl;

  return 0;
}
