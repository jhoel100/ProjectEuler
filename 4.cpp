
#include <iostream>

using namespace std;

unsigned int encpalindromo(unsigned int x)
{
  unsigned int resultado = x * 1000;   
  resultado +=    x / 100;            
  resultado +=  ((x / 10) % 10) *  10; 
  resultado +=   (x % 10)       * 100;
  return resultado;
}

int main()
{

    unsigned int limite=999999;
    bool bandera = false;

    for (unsigned int inicio = limite / 1000; inicio >= 100 && !bandera; inicio--)
    {
      unsigned int palindromo = encpalindromo(inicio);
      if (palindromo >= limite)
        continue;

      for (unsigned int i = 100; i * i <= palindromo; i++)
        if (palindromo % i == 0)
        {
          unsigned int factor = palindromo / i;
          if (factor < 100 || factor > 999)
            continue;

          cout << palindromo << endl;
          bandera = true;
          break;
        }
    }
  return 0;
}
