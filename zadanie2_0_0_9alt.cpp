#include <iostream>

auto main() -> int
{
    int a,i,silnia=1;
    std::cout<<"Podaj liczbê: \n";
    std::cin>>a;

    i=1;

    while(true)
    {
        silnia=silnia*i;
        i++;
        if(i>a){break;}
    }
    std::cout<<silnia;
    return 0;
}
