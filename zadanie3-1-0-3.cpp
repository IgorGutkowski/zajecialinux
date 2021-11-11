#include <iostream>

auto main() -> int
{
      int k;

    std::cout<<"Podaj maksymalna wartosc elementu tablicy: \n";
    std::cin>>k;


        int A[50];

        for(int i=0; i<50; i++)
        {

            A[i] = rand()%(k+1);   // elementowi "i" tablicy zostanie przypisana wartoœæ losowa w zakresie od 0 do k (poniewaz rand()%x losuje od 0 do x-1
            std::cout<<A[i]<<"\n";

        }
    return 0;
}
