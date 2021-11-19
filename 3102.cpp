#include <iostream>
using namespace std;

const int MAX=100;
int A[MAX]={};

void tablica(int n, int s)
{
	A[0]=s;
	for(int i=0;i<n;i++)
	{
	cout<<A[i]<<endl;
	A[i+1]=A[i]+1;		
	}
}

int main()
{
	int n;//rozmiar tablicy
	int s;//wartosc od ktorej zaczynamy
	cout<<"podaj rozmiar tablcy i liczbe od ktorej zaczynamy "; cin>>n; cin>>s;
	tablica(n,s);
	return 0;
}
