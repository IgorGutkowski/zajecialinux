#include <iostream>

auto main() -> int
{
      int n;
    std::cout<<"Podaj wielkosc tablicy: \n";
    std::cin>>n;

        while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica nie moze miec wiecej niz 100 elementow
        std::cin>>n;
        }

        int A[n];

        for(int i=0; i<n; i++)
        {
            A[i]=0;
            std::cout<<A[i]<<"\n";
        }
    return 0;
}
