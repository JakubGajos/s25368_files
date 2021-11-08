#include <iostream>
using namespace std;

int search(int n,int x)
{
	int A[n];
	for(int i=0;i<n;i++)//wprowadzenie elementow tablicy
	{
		cout<<"A["<<i<<"]:";cin>>A[i];
	}
	for(int i=0;i<n;i++)//sprawdzanie czy element A[i]==x
	{
		if(A[i]==x) return x;
	}
	return -1;
}

int main ()
{	
	int n,x;
	cout<<"podaj liczbe elemntow tablicy A: ";cin>>n;
	cout<<"podaj wartosc jaka ma byc wyszukana";cin>>x;
	cout<<search(n,x)<<endl;
	return 0;
}
