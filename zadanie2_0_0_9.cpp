#include <iostream>

auto main() -> int
{
    int a,i,silnia=1;
    std::cout<<"Podaj liczbê: \n";
    std::cin>>a;

    i=1;

    while(i<=a)
    {
        silnia=silnia*i;
        i++;

    }
    std::cout<<silnia;
    return 0;
}
