#include <iostream>


auto main() -> int
{
	int a,b,c;

std::cout<<"Podaj liczbê: \n";
std::cin>>a;

std::cout<<"Podaj drug¹ liczbê: \n";
std::cin>>b;

std::cout<<"Podaj trzeci¹ liczbê: \n";
std::cin>>c;

while(c==0)
    {
    std::cout<<"Trzecia liczba nie mo¿e wynosiæ 0, Podaj inn¹ liczbê: \n";
    std::cin>>c;
    }

    if(a%c==0 && a<b)
        {
            std::cout<<a<<"\n";
        }
while(a<b)
{
	a++;
	if(a%c==0){std::cout<<a<<"\n";}

}
return 0;
}
