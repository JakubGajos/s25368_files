#include <iostream>
#include <vector>

using namespace std;

vector<int> A;

void insert_table(int n)
{
	for(int i=0;i<64;i++)
	{
	A.push_back(rand() % (n+1)+0);
	}
}

void quick_sort()
{
	int p=A[A.size()/2];
	int i=0;
	int j=A.size()-1;
	do
	{
		if(A[i]>A[j])
		{
			int x=A[j];
			A[j]=A[i];
			A[i]=x;
		}
	i++;
	j--;
	}
	while(A[i]!=p || A[j]!=p);
	
}
void show_table()
{
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	int n;
	cout<<"podaj zakres liczb losowych: ";cin>>n;
	insert_table(n);
	quick_sort();
	//show_table();
	return 0;
}
