#include <iostream>
#include <string.h>
using namespace std;
	
int main()
{
	char c;
	int n;
	char s[30];
	cout<<"podaj wyraz:";cin>>s;
	cout<<"podaj pojedynczą litere jaka ma być zastosowana:";cin>>c;
	cout<<"podaj liczbę bajtów ciągu n:";cin>>n;
	memset(s, c, n);
	puts(s);//odczytanie tablicy charów po zmianach wprowadzonych przez funckję memset.
	return 0;
}
