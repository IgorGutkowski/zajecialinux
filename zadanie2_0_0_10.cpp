#include <iostream>

auto main() -> int
{
    int a,i=1,silnia=1;
    std::cout<<"Podaj liczbê: \n";
    std::cin>>a;

    do
    {
        silnia=silnia*i;
        i++;
    }
    while(i<=a);

    std::cout<<silnia;
return 0;
}
