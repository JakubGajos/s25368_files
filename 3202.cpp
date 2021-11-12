#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i=0;
	int a;
	vector <int> number;
	do
	{
		cin>>a;
		number.push_back(a);
		i++;
	}
	while(number[i-1]!=0);
	for(int j=0;j<(i-1);j++)
	{
		if(j%5==0)
		{
		cout<<"\n";
		cout<<"		"<<number[j];
		}
		else
		{
		cout<<"		"<<number[j];
		}
	}
	cout<<"\n";
	return 0;
}
	
