#include <iostream>

auto main() -> int
{
	int A[100];
    int n, ma, mi;
        std::cout<<"Podaj zakres tablicy: \n";
        std::cin>>n;

    while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica ma 100 elementow, to zapobiega wyjściu poza tablice
        std::cin>>n;
        }
        

    ma= A[0];
    mi= A[0];
    for(int i=0; i<n ;i++)
    {
        if (A[i]>ma) ma=A[i];       // jeśli jakis element tablicy jest wiekszy od poprzedniego najwiekszego to zostaje przypisany do zmiennej ma
        if(A[i]<mi) mi=A[i];        // jesli jakis element tablicy jest mniejszy od poprzedniego najmniejszego to zostaje przypisany do zmiennej mi
    }

    std::cout<<"Max: "<<ma<<"\n";
    std::cout<<"Min: "<<mi<<"\n";
    return 0;
}
