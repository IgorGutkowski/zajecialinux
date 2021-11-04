#include <iostream>


auto main() -> int
{
	int a,b;

std::cout<<"Podaj liczbê: \n";
std::cin>>a;

std::cout<<"Podaj drug¹ liczbê: \n";
std::cin>>b;

while(a<b)
{

	std::cout<<a<<"\n";
	a++;

}
return 0;
}
