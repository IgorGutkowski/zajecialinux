#include <iostream>
auto main() -> int
{

    int i,i2,n;
    std::cout<<"Podaj liczb� gwiazdek z kt�rych chcesz zbudowa� kwadrat: \n";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        for(i2=0;i2<n;i2++)
        {
            std::cout<<"* ";
        }
    std::cout<<"\n";
    }
return 0;
}
