#include <iostream>
using namespace std;
int abs(int a)
{
	if(a>=0)
	{
	return a;
	}
	else
	{
	return -a;
	}
}

int main()
{
	int a;
	cout<<"podaj liczbe "; cin>>a;
	cout<<"wartosc bezwzgledna liczby to: "<<abs(a)<<endl;
	return 0;
}
