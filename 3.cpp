
#include <iostream>

using namespace std;

int main()
{
    unsigned long long x=600851475143;

    for (unsigned long long factor = 2; factor * factor <= x; factor++){
      //encuentra un factor,si lo halla lo divide y reemplaza
      while (x % factor == 0 && x != factor) {
        x /= factor;
	cout<<"factor: "<<factor<<endl; }
	}
    cout<<"La respuesta es: "<< x <<endl;
  return 0;
}
