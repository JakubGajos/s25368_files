#include <iostream>
#include <string>
using namespace std;
int j=0;
char side_border() //boczna granica (znak)
{
	return 73;
}

char border() //granica górna i dolna (znak)
{
	return 45;
}

void full_border() //granica pola szachownicy (3 znaki)
{
	for(int i=0;i<3;i++)
	{
		cout<<border();
	}
}

void full() //pole pełne (3 znaki)
{
	for(int i=0;i<3;i++)
	{
		cout<<"*";
	}
}
void empty() //pole puste (3 znaki)
{
	for(int i=0;i<3;i++)
	{
		cout<<" ";
	}
}
void line(int a) //cała linia szachownicy (3x6 znaków)
{
	while(j<6)
	{
	if(a==0)
	{
	 full_border();
	 j++;
	 line(0);
	} 
	if(a==1)
	{
	 full();
	 j++;
	 line(2);
	}
	if(a==2)
	{
	 empty();
	 j++;
	 line(1);
	}
	}
}
int main()
{
	for(int i=0;i<10;i++)
		{
	if(i==0 || i==9)
		{
		cout<<border();
		line(0);
		cout<<border();
		cout<<"\n";
		j=0;
		}
	if(i==1 || i==2 || i==5 || i==6)
		{
		cout<<side_border();
		line(1);
		cout<<side_border();
		cout<<"\n";
		j=0;
		}
	if(i==3 || i==4 || i==7 || i==8)
		{
		cout<<side_border();
		line(2);
		cout<<side_border();
		cout<<"\n";
		j=0;
		}
	}
	return 0;
}
