#include <iostream>

auto main() -> int
{
      int n, start;
    std::cout<<"Podaj wielkosc tablicy: \n";
    std::cin>>n;

    std::cout<<"Podaj pierwsza wartosc tablicy: \n";
    std::cin>>start;

        while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica nie moze miec wiecej niz 100 elementow
        std::cin>>n;
        }

        int A[n];

        for(int i=0; i<n; i++)
        {

            A[i]=start;         // funkcja kazdemu elementowi tablicy przypisze wartosc o 1 wieksza zaczynajac od wartosci "start"
            start++;
        }
    return 0;
}
