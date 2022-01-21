#include <iostream>
#include <cmath>
using namespace std;
const double pi=3.14159265359;

double cone(int h, int r, int a)
{
	double f=pi*pow(2,r);
	double v=(f/3)*h;
	if(a==0)
	{
	return f;
	a++;
	}
	else return v;
}

int main()
{
	int h_value, r_value, a;
	cout<<"podaj wysokość i promień stożka:"; cin>>h_value>>r_value;
	int *h=&h_value;
	int *r=&r_value;
	cout<<"objętość wynosi: "<<cone(*h,*r,0)<<"\n"<<"pole podstawy wynosi: "<<cone(*h,*r,1)<<"\n";
	return 0;
}
