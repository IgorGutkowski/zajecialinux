#include <iostream>

auto main() -> int
{
	int a,b,c,s;

std::cout<<"Podaj liczb�: \n";
std::cin>>a;

std::cout<<"Podaj drug� liczb�: \n";
std::cin>>b;

std::cout<<"Podaj trzeci� liczb�: \n";
std::cin>>c;

std::cout<<"Podaj krok p�tli: \n";
std::cin>>s;

while(c==0)
    {
    std::cout<<"Trzecia liczba nie mo�e wynosi� 0, Podaj inn� liczb�: \n";
    std::cin>>c;
    }

    while(s==0)
    {
    std::cout<<"Krok p�tli nie mo�e wynosi� 0, Podaj inn� liczb�: \n";
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
