#include <iostream>
using namespace std;

int comparison(int a,int b)
{
	if(a>b)
	{
	return a;
	}
	else
	return b;
}

int main()
{
	int a,b;
	cout<<"podaj liczbe a "; cin>>a;
	cout<<"podaj liczbe b "; cin>>b;
	cout<<comparison(a,b)<<endl;
	return 0;
}
