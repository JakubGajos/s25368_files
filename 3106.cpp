#include <iostream>
using namespace std;

const int MAX=100;
int A[MAX];

void insert_table(int n)
{
	for(int i=0;i<n;i++)//wprowadzenie elementow tablicy
	{
		cout<<"A["<<i<<"]:";cin>>A[i];
	}
}

int search(int n,int x)
{
	for(int i=0;i<n;i++)//sprawdzanie czy element A[i]==x
	{
		if(A[i]==x) return i;
	}
	return -1;
}

int main ()
{	
	int n,x;
	cout<<"podaj liczbe elemntow tablicy A: ";cin>>n;
	insert_table(n);
	cout<<"podaj wartosc jaka ma byc wyszukana";cin>>x;
	cout<<search(n,x)<<"\n";
	return 0;
}
