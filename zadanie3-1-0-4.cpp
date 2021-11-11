#include <iostream>

auto main() -> int
{
     int n, suma;
     suma = 0;
    std::cout<<"Podaj wielkosc tablicy: \n";
    std::cin>>n;

    int A[n];


    for(int i=0; i<n ;i++)
    {
        suma += A[i]; // suma = suma + A[i...]
    }

    std::cout<<"Suma liczb elementow tablicy A: "<<suma<<"\n";

    return 0;
}
