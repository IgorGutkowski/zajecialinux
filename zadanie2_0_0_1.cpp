#include <iostream>


auto main() -> int
{
	int a,b;

std::cout<<"Podaj liczb�: \n";
std::cin>>a;

std::cout<<"Podaj drug� liczb�: \n";
std::cin>>b;

while(a<b)
{

	std::cout<<a<<"\n";
	a++;

}
return 0;
}
