#include <iostream>
using namespace std;

int main()
{
	enum PERMISSION
	{
		PERM_READ=1,
		PERM_WRITE=2,
		PERM_EXECUTE=4
	};
	
	int users[10];
	for(int i=0;i<10;i++)
	{
		users[i]=rand()%8;
		if(users[i]==PERM_READ)
		{
			cout<<"użytkownik["<<users[i]<<"] posiada dostęp do:"<<"PERM_WRITE"<<"\n";
		}
		if(users[i]==PERM_WRITE)
		{
			cout<<"użytkownik["<<users[i]<<"] posiada dostęp do:"<<"PERM_WRITE"<<"\n";
		}
		if(users[i]==PERM_EXECUTE)
		{
			cout<<"użytkownik["<<users[i]<<"]posiada dostęp do:"<<"PERM_EXECUTE"<<"\n";
		}
	}
	return 0;
}
