#include <iostream>

auto main() -> int
{
    int a,i,silnia=1;

    std::cout<<"Podaj liczb�\n";
    std::cin>>a;

for(i=a;i>1;i--)
{
    silnia=silnia*i;
}

    std::cout<<silnia;
    return 0;
}
