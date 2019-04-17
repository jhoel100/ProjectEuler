//https://euler.stephan-brumme.com
//hallar el triplete que sumado da 1000, encontrar el producto de sus valores
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  //ninguno de los valores puede ser superior a la suma osea 1000 
  const int MaxPerimeter = 1000;
  const int NoSolution   =   0;
  
  vector<int> cache(MaxPerimeter + 1, NoSolution);

  for (int a = 1; a < MaxPerimeter; a++)
    for (int b = a + 1; b < MaxPerimeter - a; b++)
    {
      int c2 = a*a + b*b;
      int c = sqrt(c2);
      //verifica si son iguales
      if (c*c != c2)
        continue;

      int sum = a + b + c;
      if (sum > MaxPerimeter)
        break;
      
      //halla la sumatoria y la almacena
      if (cache[sum] < a*b*c)
        cache[sum] = a*b*c;
    }

    unsigned int n=1000;
    cout << cache[n] << endl;
 
  return 0;
}
