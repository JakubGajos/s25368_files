#include <iostream>
using namespace std;

int swap(int a, int b)
{
	int c=b;
	b=a;
	a=c;
	return a;
}

int main()
{
	int number_a=4;
	int number_b=6;
	cout<<"podaj a i b: ";cin>>number_a;cin>>number_b;
	int *a=&number_a;
	int *b=&number_b;
	cout<<"przed zmianą:"<<"\n"<<"liczba a:"<<*a<<"\n"<<"liczba b:"<<*b<<"\n";
	cout<<"po zmianie:"<<swap(*a,*b)<<" "<<swap(*b,*a);
	return 0;
}
