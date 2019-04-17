//https://euler.stephan-brumme.com
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<unsigned int> primes;
  primes.reserve(10001);
  primes.push_back(2);
  for (unsigned int x = 3; primes.size() <= 10000; x += 2)
  {
    bool isPrime = true;
    for (auto p : primes)
    {
      if (x % p == 0)
      {
        isPrime = false;
        break;
      }

      if (p*p > x)
        break;
    }

    if (isPrime)
      primes.push_back(x);
  }
      for(int i=0;i<primes.size();i++){
          cout<<primes[i]<<"  ";
      }
      cout<<endl;
      unsigned int x=10001;

      x--;
      cout << "La solucion es: "<<primes[x] <<endl;

  return 0;
}
