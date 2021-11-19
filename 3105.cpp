#include <iostream>
using namespace std;

const int MAX=100;
int A[MAX];


void insert_tab(int n)
{
	for(int i=0;i<n;i++)//wprowadzenie elementow tablicy
	{
		cout<<"A["<<i<<"]:";cin>>A[i];
	}
	cout<<"\n";
}

int i=0;
int n;
int mx=0;//indeks max
int mn=1;//indeks min

void min_max(int i)
{
	if(A[i]>A[i+1] && A[i]>A[mx])
	{
		mx=i; //zapisywanie indeksu wartosci max pod j
	}
	if(A[i]<A[i+1] && A[i]<A[mn])
	{
		mn=i;
	}
	if(i<n-1)
	{
		i++;
		min_max(i);
	}
}

int main ()
{
	cout<<"podaj liczbe elemntow tablicy A: ";cin>>n; cout<<"\n";
	insert_tab(n);
	min_max(i);
	cout<<"MAX["<<mx<<"]:"<<A[mx]<<"\n";
	cout<<"MIN["<<mn<<"]:"<<A[mn];
	return 0;
}
