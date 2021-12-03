#include <iostream>


double fSum (double (*f)(double),int n, int m); // jako argumenty przyjmuje to co zwraca funkcja wskazana przez f dla arugmentu pdoanego w (double) oraz po "," kolejne 2 argumenty.
double funkcja(double a);


int main()
{

   auto f = &funkcja;              // deklaracja wskaznika f na funkcje o naziwe "funkcja"

    std::cout<<fSum(funkcja,1,5);  // wyswietlenie zawartosci wywloania funkcji Fsum jako argumenty podajemy to co zwraca funkcja "funkcja", 1 oraz 5.

    return 0;
}

double funkcja(double a)
{
    return a*2;                         // funkcja "funkcja zwraca podwojona wartosc argumentu.
}

double fSum (double (*f)(double),int n, int m)
{

    float suma = 0.0;
    for(int i = n;i <= m;i++)                     // petla oddajaca dzialanie matematycznego symbolu sumy.
    {
        suma += f(i);
    }
    return suma;
}

