#include<iostream>
using namespace std;

int main(){
	unsigned int aux,x=1,y=2,rpta=0;
	while(y<4000000){
		aux=y;
		y=x+y;
		x=aux;
		if(x%2==0){
			rpta+=x;
		}
		cout<<y<<" ";
	}
	cout<<endl;
	cout<<"La suma es de: "<<rpta<<endl;
	return 0;
}
