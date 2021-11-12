#include <iostream>

auto main() -> int
{
	   int n, wartosc, i, start;
	   start = 0;
	   i=0;
	   
	   int tablica[100];
	   
    std::cout<<"Podaj zakres tablicy: \n";
    std::cin>>n;
    
    while(n>100)
        {
        std::cout<<"Podana liczba nie moze byc wieksza od 100.\n"; // tablica ma 100 elementow, to zapobiega wyjściu poza tablice
        std::cin>>n;
        }
    
    std::cout<<"Podaj szukana wartosc: \n";
    std::cin>>wartosc;
    
  
        
       for(int i=0; i<n; i++)
        {

            tablica[i]=start;         // funkcja kazdemu elementowi tablicy w zakresie do n przypisze wartosc o 1 wieksza zaczynajac od wartosci "start"
            start++;
        }
	
	while (tablica[i] !=wartosc)	// funkcja sprawdza do którego elementu tablicy przypisana jest wartosc
	{
		i++;
		if(i>=n){break;} 			// przestaje na i>=n zeby nie przekroczyc zakresu
	}
	
	if (i==n)					// jeśli i==n wartosc nie znajduje się w tej tablicy
	{
	std::cout<<"-1\n";
	}
	else
	{
	std::cout<< "Tablica zawiera podana wartosc w tablicy o indeksie: "<< i <<"\n";		
	}
	return 0;
}
