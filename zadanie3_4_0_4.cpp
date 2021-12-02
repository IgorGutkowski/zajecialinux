#include <iostream>

void cone(float &h, float &r)                    // & - referencja do zmiennej (dzieki temu h w funkcji cone i h w main to dokladnie ta sama zmienna
{
    r = (3.14 *(r*r) );                          // r wejsciowo promien wyjsciowo pole podstawy
    h = ((r/3)*h);                               // h wejsciowo to wysokosc ale wyjsciowo to objetosc
}

int main()
{
    float h, r;

    std::cout<<"Podaj promien stozka: \n";
    std::cin>>r;

    std::cout<<"Podaj wysokosc stozka: \n";
    std::cin>>h;

    cone(h, r);

    std::cout<<"Pole podstawy stozka = "<<r<<std::endl;
    std::cout<<"Objetosc stozka = "<<h<<std::endl;

    return 0;

}
