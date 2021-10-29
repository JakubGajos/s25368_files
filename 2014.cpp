#include <iostream>

int rectangle(int a, int b)
{
    for(int i=a;i>0;i--) //petla od wysokosci
    {
	if(i==a||i==1)
	{        
		for(int i=b;i>0;i--) //petla dla zewnetrznych lini (pełne)
	        {
	        std::cout<<"*";
	        }
	}
	else //petla dla pustych lini
	{
		for(int i=b;i>0;i--)
		{
			if(i==b||i==1)
			{
			std::cout<<"*";
			}
			else
			{
			std::cout<<" ";
			}
		}
	}
    std::cout<<"\n";
    }
    return a;
}

int main()
{
    int a,b;
    std::cout<<"podaj wymiary prostokąta (wysokosc i szerokosc):";std::cin>>a;std::cin>>b;
    rectangle(a,b);
    return 0;
}



