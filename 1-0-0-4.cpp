#include <iostream>

auto main() -> int
{
	int liczba1,liczba2;
	
	std::cout<<"Podaj liczbę\n";
	std::cin>>liczba1;
	
	std::cout<<"Podaj drugą liczbę\n";
	std::cin>>liczba2;
	
	if(liczba1 > liczba2) std::cout <<"Większa liczba to: " << liczba1 << "\n";
	if(liczba1 < liczba2) std::cout <<"Większa liczba to: " << liczba2 << "\n";
	if(liczba1 ==liczba2) std::cout <<"Liczby są równe\n";
}
	
	
