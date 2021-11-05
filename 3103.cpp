#include <iostream>
using namespace std;
int main()
{
	int A[50];
	int k;
	cout<<"podaj liczbe k ";cin>>k;
	for(int i=0;i<50;i++)
	{
		A[i]={rand() % (k+1)};
		cout<<"A["<<i<<"] "<<A[i]<<endl;
	}
	return 0;
}
