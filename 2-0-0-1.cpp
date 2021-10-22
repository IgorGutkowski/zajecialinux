#include <iostream>


auto main() -> int
{
	int a,b,i;
	
std::cout<<"Podaj liczbę: \n";
std::cin>>a;
	i=a;
std::cout<<"Podaj drugą liczbę: \n";
std::cin>>b;

while(i>=a && i<b)
{
	
	i++;
	std::cout<<i<<"\n";
}
}
