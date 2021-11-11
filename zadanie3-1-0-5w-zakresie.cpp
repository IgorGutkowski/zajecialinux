#include <iostream>

auto main() -> int
{
    int n, ma, mi, k;
        std::cout<<"Podaj wielkosc tablicy: \n";
        std::cin>>n;

        std::cout<<"Podaj maksymalna wartosc elementu tablicy: \n";
        std::cin>>k;

    int A[n];

       for(int i=0; i<n; i++)
        {

            A[i] = rand()%(k+1);   // elementowi "i" tablicy zostanie przypisana wartoœæ losowa w zakresie od 0 do k (poniewaz rand()%x losuje od 0 do x-1
            std::cout<<A[i]<<"\n";
        }

    ma= A[0];
    mi= A[0];
    for(int i=0; i<n ;i++)
    {
        if (A[i]>ma) ma=A[i];       // jeœli jakis element tablicy jest wiekszy od poprzedniego najwiekszego to zostaje przypisany do zmiennej ma
        if(A[i]<mi) mi=A[i];        // jesli jakis element tablicy jest mniejszy od poprzedniego najmniejszego to zostaje przypisany do zmiennej mi
    }
    std::cout<<"Max: "<<ma<<"\n";
    std::cout<<"Min: "<<mi<<"\n";
    return 0;
}
