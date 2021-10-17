#include <iostream>

int  dodawanie(int a,int b)
{
	return a+b;
}
int  main()
{
	int a,b;
	std::cout<<"podaj liczbe a ";
	std::cin>>a;
	std::cout<<"podaj liczbe b ";
	std::cin>>b;
	std::cout<<dodawanie(a,b);
	return 0;
}
