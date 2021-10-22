#include <iostream>
#include <string>
auto main() -> int 
{
	int a,b,c;
	std::string x("Podaj liczbę numer");
	std::string y("Największa z nich wynosi: ");
		
std::cout<<x<<" 1: \n";
std::cin>>a;
	
std::cout<<x<<" 2: \n";
std::cin>>b;

std::cout<<x<<" 3: \n";
std::cin>>c;

	if(a > b && a > c)std::cout<<y<< a<<"\n";
	else if(b > a && b > c)std::cout<<y<<b<<"\n";
	else if(c > a && c > b)std::cout<<y<<c<<"\n";
	
return 0;
}
