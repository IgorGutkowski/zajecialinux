#include <iostream>
#include <cmath>
float trojkat(float a, float h);
float prostokat(float a, float b);
float kolo(float r);
float trapez(float a, float b, float h);
float foremny(float a);

int main()
{
while(true)
{
    float a, b, h, r;
    int n;

    std::cout<<"Wybierz figure: \n";

    std::cout<<"0 - wyjscie\n1 - trojkat\n2 - prostokat\n3 - kolo\n4 - trapez\n5 - szesciokat foremny\n";
    std::cin>>n;

    if(n == 1)
    {
        std::cout<<"Wartosci musza byc poprawne inaczej otrzymasz wynik -1\n";
        std::cout<<"Podaj dlugosc podstawy: \n";
        std::cin>>a;
        std::cout<<"Podaj wysokosc: \n";
        std::cin>>h;
        std::cout<<"Pole trojkata = "<<trojkat(a, h)<<"\n";

    }

   else if (n == 2)
    {
        std::cout<<"Wartosci musza byc poprawne inaczej otrzymasz wynik -1\n";
        std::cout<<"Podaj pierwszy bok: \n";
        std::cin>>a;
        std::cout<<"Podaj drugi bok: \n";
        std::cin>>b;
        std::cout<<"Pole prostokata = "<<prostokat(a, b)<<"\n";

    }

    else if(n == 3)
    {
        std::cout<<"Wartosci musza byc poprawne inaczej otrzymasz wynik -1\n";
        std::cout<<"Podaj promien kola: \n";
        std::cin>>r;
        std::cout<<"Pole kola = "<<kolo(r)<<"\n";

    }

    else if(n == 4)
    {
        std::cout<<"Wartosci musza byc poprawne inaczej otrzymasz wynik -1\n";
        std::cout<<"Podaj gorna podstawe: \n";
        std::cin>>a;
        std::cout<<"Podaj dolna podstawe: \n";
        std::cin>>b;
        std::cout<<"Podaj wysokosc: \n";
        std::cin>>h;
        std::cout<<"Pole trapezu = "<<trapez(a,b,h)<<"\n";

    }

    else if(n == 5)
    {
        std::cout<<"Wartosci musza byc poprawne inaczej otrzymasz wynik -1\n";
        std::cout<<"Podaj bok szesciokata foremnego: \n";
        std::cin>>a;
        std::cout<<"Pole szesciokata foremnego = "<<foremny(a)<<"\n";

    }

   if(n==0)
   {
       break;
   }
}
return 0;
}

float trojkat(float a, float h)
{
    if(a <=0 || h <=0)
    {
        return -1;
    }
    else
        {
    return ((a*h)/2);
        }
}
float prostokat(float a, float b)
{
    if(a<=0 || b<=0)
    {
        return -1;
    }
    else
    {
    return a*b;
    }
}
float kolo(float r)
{
    if(r<=0)
    {
        return -1;
    }
    else
        {
        return 3.14*(r*r);
        }
}
float trapez(float a, float b, float h)
{
    if(a<=0 || b<=0 || h<=0)
    {
        return -1;
    }
    else
    {
    return (((a+b)*h)/2);
    }
}
float foremny(float a)
{
    if(a<=0)
    {
        return -1;
    }
    else
    {
        float b = sqrt(3);
    return (((a*a)*b)/4);
    }
}

