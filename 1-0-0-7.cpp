#include <iostream>
	
auto main() -> int
{
	int liczba;

std::cout<<"Podaj liczbę:\n";
std::cin>>liczba;

if(liczba > 0) std::cout<<"Wynik: 1\n";
if(liczba == 0) std::cout<<"Wynik: 0\n";
if(liczba < 0) std::cout<<"Wynik: -1\n";

return 0;
}
			
