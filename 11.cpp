//halla el producto de los 3 valores en la matriz, de diversas maneras pero igual direccion
#include <iostream>

using namespace std;

int main()
{
  const unsigned int Size = 20;
  unsigned int matrix[Size][Size];

  for (unsigned int y = 0; y < Size; y++){
    for (unsigned int x = 0; x < Size; x++){
      cout<<x<<""<<y;
      cin >> matrix[x][y];}}

  unsigned int best = 0;
  for (unsigned int y = 0; y < Size; y++)
    for (unsigned int x = 0; x < Size; x++)
    {
      if (x + 3 < Size)
      {
        //verificar en linea recta
        unsigned int current = matrix[x][y] * matrix[x+1][y] * matrix[x+2][y] * matrix[x+3][y];
        if (best < current)
          best = current;
      }
      if (y + 3 < Size)
      {
        //verificar en linea vertical
        unsigned int current = matrix[x][y] * matrix[x][y+1] * matrix[x][y+2] * matrix[x][y+3];
        if (best < current)
          best = current;
      }
      if (x + 3 < Size && y + 3 < Size)
      {
        //verificar en diagonal para abajo
        unsigned int current = matrix[x][y] * matrix[x+1][y+1] * matrix[x+2][y+2] * matrix[x+3][y+3];
        if (best < current)
          best = current;
      }
      if (x + 3 < Size && y >= 3)
      {
        //verificar en diagonal para arriba
        unsigned int current = matrix[x][y] * matrix[x+1][y-1] * matrix[x+2][y-2] * matrix[x+3][y-3];
        if (best < current)
          best = current;
      }
    }

  cout <<"La solucion es de: "<< best << endl;
  return 0;
}
