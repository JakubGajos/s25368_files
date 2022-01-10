#include <string.h>
#include <iostream>
using namespace std;

void *memset(void *s,char c, size_t n)
{
	int m=n;
	for(int i=0;i<m;i++)
	{
		s=&c;
	}
	return s;
}

int main()
{
	void *memset(void *s,char c,size_t n);
	return 0;
}
