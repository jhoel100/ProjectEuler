#include <iostream>

using namespace std;

int main()
{
	int s=0;
	for(int i=1;i<1000;i++){
		if((i%5==0)||(i%3==0)){
			cout<<i<<" ";
			s=s+i;
		}
	}
	cout<<endl;
	cout<<"La suma es de: "<<endl;	
	cout<<s<<endl;
	return 0;
}

