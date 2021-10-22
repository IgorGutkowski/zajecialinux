#include <iostream>
auto main() ->int
{
	int a,b,c,i;
	
std::cout<<"Podaj liczbę: \n";
std::cin>>a;

std::cout<<"Podaj drugą liczbę: \n";
std::cin>>b;

std::cout<<"Podaj trzecią liczbę: \n";
std::cin>>c;
while(c==0)
{
std::cout<<"Trzecia liczba nie może wynosić 0, Podaj inną liczbę: \n";
std::cin>>c;
}
	i=a;

while(i>=a && i<b && c!=0)
{
	i++;
if(i%c==0)
{
	std::cout<<i<<"\n";
}


}
return 0;
}

