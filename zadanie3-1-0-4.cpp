#include <iostream>

auto main() -> int
{
	int A[100];
     int n, suma, start;
     suma = 0;
     start = 0;
    std::cout<<"Podaj zakres tablicy: \n";
    std::cin>>n;
	
	while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica ma 100 elementow, to zapobiega wyjściu poza tablice
        std::cin>>n;
        }
        
        for(int i=0; i<n; i++)
        {

            A[i]=start;         // funkcja kazdemu elementowi tablicy w zakresie do n przypisze wartosc o 1 wieksza zaczynajac od wartosci "start"
            start++;
        }


    for(int i=0; i<n ;i++)
    {
        suma += A[i]; // suma = suma + A[i...]
    }

    std::cout<<"Suma liczb elementow zakresu tablicy A: "<<suma<<"\n";

    return 0;
}


