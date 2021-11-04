#include <iostream>
auto main() -> int
{

    int i,i2,n,n2;
    std::cout<<"Podaj wysokoœæ prostok¹ta: \n";
    std::cin>>n;
    std::cout<<"Podaj szerokoœæ prostok¹ta: \n";
    std::cin>>n2;
    for(i=0;i<n;i++)
    {
        for(i2=0;i2<n2;i2++)
        {
            std::cout<<"* ";
        }
    std::cout<<"\n";
    }
return 0;
}
