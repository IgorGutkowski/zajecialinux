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

while(i>=a && i<b && (i+s<b) && (i+s>=a))
{
	
	
if((i+s)==0){
	return 0;
}
	i=i+s;
	std::cout<<i<<"\n";
}
return 0;
}

