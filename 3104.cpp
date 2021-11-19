#include <iostream>
using namespace std;

const int MAX=100;

int suma(int n)
{
	int A[MAX];
	int s=0;
	for(int i=0;i<n;i++)
	{
		cout<<"podaj A["<<i<<"]:";cin>>A[i];
		s=s+A[i];
	}
	cout<<"suma:"; return s;	
}

int main ()
{
	int n;
	cout<<"podaj liczbe elemntow tablicy A: ";cin>>n;
	cout<<suma(n)<<endl;
	return 0;
}
