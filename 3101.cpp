#include <iostream>

int init(int n, int a[n])// -> void
{
	return a[n]={0};
}

int main()
{
	int n;
	int a[10];
	init(n,a[n]);
	return 0;
}
