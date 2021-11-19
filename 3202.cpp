#include <iostream>
#include <vector>
using namespace std;

vector<int> number;
int a;
void insert_table(int a)//dodaje nowy element do tablicy number
{
	number.push_back(a);
}
void show_table()//wypisuje wszystkie elementy tablicy w odpowiednim szyku
{
	for(int j=0;j< number.size() ;j++)
	{
	if(j%5==0)
		{
		cout<<number[j]<<"\n";
		}
	else
		{
		cout<<"	"<<number[j]<<"	";
		}
	}
	cout<<"\n";
}
int main()
{
	do
	{
	cin>>a;
	insert_table(a);
	}
	while(a!=0);
	show_table();
	return 0;
}
	
