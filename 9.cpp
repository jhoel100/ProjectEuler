//https://euler.stephan-brumme.com
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  const int MaxPerimeter = 1000;
  const int NoSolution   =   0;

  vector<int> cache(MaxPerimeter + 1, NoSolution);

  for (int a = 1; a < MaxPerimeter; a++)
    for (int b = a + 1; b < MaxPerimeter - a; b++)
    {
      int c2 = a*a + b*b;
      int c = sqrt(c2);
      if (c*c != c2)
        continue;

      int sum = a + b + c;
      if (sum > MaxPerimeter)
        break;

      if (cache[sum] < a*b*c)
        cache[sum] = a*b*c;
    }

    unsigned int n=1000;
    cout << cache[n] << endl;
 
  return 0;
}
