#include <iostream>
#include <math.h>

auto main () -> int
{
	int n;
	
	std::cout<<"Podaj liczbę\n";
	std::cin>>n;
	
	if(n<2)
		std::cout<<"Liczba nie jest pierwsza\n";
		
	if(n==2 || n==3)
		std::cout<<"Liczba jest pierwsza\n";
	
	
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)std::cout<<"Liczba nie jest pierwsza\n";
		else std::cout<<"Liczba jest pierwsza\n";
	
		
	

return 0;
}
		
