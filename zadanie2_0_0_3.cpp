#include <iostream>

auto main() -> int
{
	int a,b,c,s;

std::cout<<"Podaj liczbê: \n";
std::cin>>a;

std::cout<<"Podaj drug¹ liczbê: \n";
std::cin>>b;

std::cout<<"Podaj trzeci¹ liczbê: \n";
std::cin>>c;

std::cout<<"Podaj krok pêtli: \n";
std::cin>>s;

while(c==0)
    {
    std::cout<<"Trzecia liczba nie mo¿e wynosiæ 0, Podaj inn¹ liczbê: \n";
    std::cin>>c;
    }

    while(s==0)
    {
    std::cout<<"Krok pêtli nie mo¿e wynosiæ 0, Podaj inn¹ liczbê: \n";
    std::cin>>s;
    }

    if(a%c==0 && a<b)
        {
            std::cout<<a<<"\n";
        }
while(a<b && a>0)
{
	if(a%c==0){std::cout<<a<<"\n";}
	a=a+s;

}
return 0;
}
