#include <iostream>


auto main() -> int
{
	int a,b,c;

std::cout<<"Podaj liczb�: \n";
std::cin>>a;

std::cout<<"Podaj drug� liczb�: \n";
std::cin>>b;

std::cout<<"Podaj trzeci� liczb�: \n";
std::cin>>c;

while(c==0)
    {
    std::cout<<"Trzecia liczba nie mo�e wynosi� 0, Podaj inn� liczb�: \n";
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
