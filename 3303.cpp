#include <iostream>
#include <cmath>
using namespace std;
double const pi=3.14159265359;
int x;
char y;

void menu_text()
{
	cout<<"Której figury chcesz policzyć pole? wybierz: "<<"\n";
	cout<<"0 - trójkąt"<<"\n"<<"1 - prostokąt"<<"\n"<<"2 - koło"<<"\n"<<"3 - trapez"<<"\n"<<"4 - sześciokąt 	foremny"<<"\n";
}

void triangle_field()
{
	double a,h;
	double f;
	cout<<"podaj a i h trójkąta: ";cin>>a;cin>>h;
	if(a>0 && h>0)	
	{
	f=(a*h)/2;
	cout<<"pole: "<<f;
	}
	else 
	{
	cout<<"-1";
	}
}

void rectangle_field()
{
	double a,b,f;
	cout<<"podaj a i b prostokąta: ";cin>>a;cin>>b;
	if(a>0 && b>0)	
	{
	f=a*b;
	cout<<"pole: "<<f;
	}
	else 
	{
	cout<<"-1";
	}
}

void circle_field()
{
	double r;
	double f;
	cout<<"podaj promień koła r: ";cin>>r;
	if(r>0)
	{
	f=pi*pow(r,2);
	cout<<"pole: "<<f;
	}
	else
	{
	cout<<"-1";
	}
}

void trapeze_field()
{
	double a,b,h;
	double f;
	cout<<"podaj podstawy a,b i wysokość ";cin>>a;cin>>b;cin>>h;
	if(a>0 && b>0 && h>0)
	{
	f=((a+b)*2)/2;
	cout<<"pole: "<<f;
	}
	else
	{
	cout<<"-1";
	}
}

void regular_hexagon_field()
{
	double a;
	double f;
	cout<<"podaj dlugość boku a: ";cin>>a;
	if(a>0)
	{
	f=3*(pow(a,2)*sqrt(3))/2;
	cout<<"pole: "<<f;
	}
	else
	{
	cout<<"-1";
	}
	
}

void menu(int x)
{
	if(x==0) triangle_field(); cout<<"\n";
	if(x==1) rectangle_field(); cout<<"\n";
	if(x==2) circle_field(); cout<<"\n";
	if(x==3) trapeze_field(); cout<<"\n";
	if(x==4) regular_hexagon_field(); cout<<"\n";
}

int main()
{
	int i=0;
	while(i<1)
	{
		menu_text();
		cin>>x;
		if(x>4 || x<0)
		{
			while(x>4 || x<0)
			{
			cerr<<"błąd, wybierz ponownie x:"<<"\n";
			cin>>x;
			}
			menu(x);
		}
		else menu(x);
		cout<<"czy chcesz ponownie liczyć pole danej figury? (Y/N); ";cin>>y;
		if(y=='Y' || y=='y') i=0;
		if(y=='N' || y=='n') i++;

	}
	return 0;
}
