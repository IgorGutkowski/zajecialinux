#include <iostream>

auto main() -> int
{
	int A[100];
    int n, ma, mi;
        std::cout<<"Podaj zakres tablicy: \n";
        std::cin>>n;

    while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica ma 100 elementow, to zapobiega wyjœciu poza tablice
        std::cin>>n;
        }


    ma= A[0];
    mi= A[0];
    for(int i=0; i<n ;i++)
    {
        if (A[i]>ma) ma=i;       // jeœli jakis element tablicy jest wiekszy od poprzedniego najwiekszego to zostaje przypisany do zmiennej ma
    }
    for(int j=0; j<n ;j++)
    {
        if(A[j]<mi) mi=j;        // jesli jakis element tablicy jest mniejszy od poprzedniego najmniejszego to zostaje przypisany do zmiennej mi
    }

    std::cout<<"Indeks Max: "<<ma<<" "<<"o wartosci: "<<A[ma]<<"\n";
    std::cout<<"Indeks Min: "<<mi<<" "<<"o wartosci: "<<A[mi]<<"\n";
    return 0;
}
