#include <iostream>

auto main() -> int
{
 int a;
std::cout<<"Podaj liczbê: \n";
std::cin>>a;

	if(a%2==0 && a!=2 && a!=3 && a!=5 && a!=7 && a!=11 || a%3==0 && a!=2 && a!=3 && a!=5 && a!=7 && a!=11 || a%5==0 && a!=2 && a!=3 && a!=5 && a!=7 && a!=11 || a%7==0 && a!=2 && a!=3 && a!=5 && a!=7 && a!=11 ||  a%11==0 && a!=2 && a!=3 && a!=5 && a!=7 && a!=11 )
	{
		std::cout<<"Liczba nie jest pierwsza.\n";
	}
	else
	{
		std::cout<<"Liczba jest pierwsza.\n";
	}
return 0;
}
