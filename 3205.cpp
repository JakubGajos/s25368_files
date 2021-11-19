#include <iostream>
#include <vector>

using namespace std;

int A[63];
int i=0;
int j=63;
int p;

void insert_table(int n)
{
	pivot=(rand()%(n+1)+0);//element środkowy, pivot
	for(int i=0;i<64;i++)
	{
	A[i]=(rand()%(n+1)+0);
	}
}

void quick_sort(int i,int j)
{	
	
}
void show_table()
{
	
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
