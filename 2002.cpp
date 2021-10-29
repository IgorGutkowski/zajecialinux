#include <iostream>


auto main() -> int
{
	int a,b,c,i;
	
std::cout<<"Podaj liczbę: \n";
std::cin>>a;
	
std::cout<<"Podaj drugą liczbę: \n";
std::cin>>b;

std::cout<<"Podaj trzecią liczbę: \n";
std::cin>>c;

i=a;
	
std::cout<<"przedział zawiera liczby:\n";
for(int i=a;i<b;i++)
{
	if(i%c==0)
{
	std::cout<<i<<"\n";
}	
	
	
}
return 0;
}
