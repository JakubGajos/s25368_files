#include <iostream>

long long factorial(int n)
{
    if(n<2) return 1;
    else
    {   
        return n*factorial(n-1);
    }
}

int main()
{
    int n;
    std::cout<<"podaj liczbe ";std::cin>>n;
    std::cout<<"n! "<<factorial(n)<<std::endl;
    return 0;
}

