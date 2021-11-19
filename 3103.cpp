#include <iostream>
using namespace std;
int main()
{
	const int MAX=50;
	int A[MAX];
	int k;
	cout<<"podaj liczbe k ";cin>>k;
	for(int i=0;i<50;i++)
	{
		A[i]={rand() % (k+1)};
		cout<<"A["<<i<<"] "<<A[i]<<endl;
	}
	return 0;
}
