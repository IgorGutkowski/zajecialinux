#include <iostream>

auto main() -> int
{
	int liczba1,liczba2,wynik;
	
	std::cout<<"Podaj liczbę\n";
	std::cin>>liczba1;
	
	std::cout<<"Podaj kolejną liczbę\n";
	std::cin>>liczba2;
	wynik=liczba1*liczba2;
	std::cout<<"Iloczyn wynosi: " << wynik <<"\n";
}
