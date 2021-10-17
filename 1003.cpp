#include <iostream>
using namespace std;

int pow(int a,int b)
{
	return a*b;
}

int main()
{
	int a,b;
	cout<<"podaj liczbe a ";
	cin>>a;
	cout<<"podaj liczbe b ";
	cin>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}
