#include <iostream>
auto main() -> int
{
    int a,i,i2;

    std::cout<<"Podaj wysoko�� tr�jk�ta: \n";
    std::cin>>a;

    for(i=0;i<a;i++)
    {
        for(i2=0;i2<=i;i2++)
        {
            std::cout<<"*";
        }
    std::cout<<"\n";
    }
}
