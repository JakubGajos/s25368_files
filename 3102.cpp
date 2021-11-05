#include <iostream>
using namespace std;

void tablica(int n, int s)
{
	int A[n];
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
