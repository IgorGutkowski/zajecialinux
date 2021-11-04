#include <iostream>

auto main() -> int
{
	int a,b,suma=0;
	std::cout<<"Podaj limit\n";
	std::cin>>a;
	std::cout<<"Podaj dzielnik\n";
	std::cin>>b;

for(int i=0;i<=a;i++)
{
	if(i%b==0)
	suma = suma +i;

}
    std::cout<<"Suma liczb podzielnych przez "<<b<<" w tym przedziale wynosi: "<<suma;
return 0;
}
