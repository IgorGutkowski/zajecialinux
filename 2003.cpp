#include <iostream>


auto main() -> int
{
	int a,b,s,i;
	
std::cout<<"Podaj liczbę: \n";
std::cin>>a;
	
std::cout<<"Podaj drugą liczbę: \n";
std::cin>>b;

std::cout<<"Podaj trzecią liczbę: \n";
std::cin>>s;
i=a;
	if(s==0)
	{ 
		return 0;
	}
std::cout<<"przedział zawiera liczby:\n";
for(int i=a;i<b;i=(i+s))
{
	
	std::cout<<i<<"\n";
	
	
	
}
return 0;
}
