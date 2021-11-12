#include <iostream>

auto main() -> int
{
      int n;
    std::cout<<"Podaj zakres tablicy, ktory chcesz wypelnic zerami: \n";
    std::cin>>n;
	
	while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica ma 100 elementow
        std::cin>>n;
        }
       

        int A[100];

        for(int i=0; i<n; i++)
        {
            A[i]=0;
            std::cout<<A[i]<<"\n";
        }
    return 0;
}
