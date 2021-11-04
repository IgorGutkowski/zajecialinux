#include <iostream>
auto main() -> int
{
    int a,i,i2;

    std::cout<<"Podaj wysokoœæ trójk¹ta: \n";
    std::cin>>a;

    for(i=a;i>0;i--)
    {
        for(i2=i;i2>0;i2--)
        {
            std::cout<<"*";
        }
    std::cout<<"\n";
    }
}
