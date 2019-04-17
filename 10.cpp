//https://euler.stephan-brumme.com
//hallar la suma de los primos menores a 2000000
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  const unsigned int MaxPrime = 2000000;

  vector<unsigned int> primes;
  //añade el numero 2 a al vector de primos
  primes.push_back(2);

  for (unsigned int i = 3; i <= MaxPrime; i += 2)
  {
    //supone que si es primo
    bool isPrime = true;
    for (auto p : primes)
    {
      //si algun primo al cuadrado es mayor a rompe
      if (p*p > i)
        break;
      
      //verifica para todos los primos si tiene divisor false
      if (i % p == 0)
      {
        isPrime = false;
        break;
      }
    }

    if (isPrime)
      //agrega el primo a la lista
      primes.push_back(i);
  }

  //crea un mapa con los enteros de indice y sus sumas
  map<unsigned int, unsigned long long> sums;
  
  unsigned long long sum = 0;
  for (auto p : primes)
  {
    //halla la suma de los primos anteriores consecutivos
    sum += p;
    sums[p] = sum;
  }

    unsigned int x=2000000;

    auto i = sums.upper_bound(x);
    i--;
    //imprime el ultimo valor el segundo en el mapa
    cout << i->second << endl;

  return 0;
}
