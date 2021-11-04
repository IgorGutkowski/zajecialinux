#include <iostream>

auto main() -> int
{
    int a,i,silnia=1;

    std::cout<<"Podaj liczbê\n";
    std::cin>>a;

for(i=1;i<=a;i++)
{
    silnia=silnia*i;
}

    std::cout<<silnia;
    return 0;
}
