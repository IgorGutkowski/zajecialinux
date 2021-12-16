#include <iostream>
#include<string>

void Podaj();

auto zenskiemeskie(std::string imie,int &meskie, int &zenskie) -> void;

int main()
{
    int meskie = 0;
    int zenskie =0;

    std::string imie1, imie2, imie3, imie4, imie5;

     Podaj();
     std::cin>>imie1;
     Podaj();
     std::cin>>imie2;
     Podaj();
     std::cin>>imie3;
     Podaj();
     std::cin>>imie4;
     Podaj();
     std::cin>>imie5;

     std::string tab[5] = {imie1,imie2,imie3,imie4,imie5};

    for(int i =0;i<5;i++){
    zenskiemeskie(tab[i],meskie,zenskie);
    }

    std::cout<<"Ilosc imion meskich wsrod podanych: "<<meskie<<"\n";
    std::cout<<"Ilosc imion zenskich wsrod podanych: "<<zenskie<<"\n";

return 0;
}

void Podaj()
{
    std::cout<<"Podaj imie: \n";
}

auto zenskiemeskie(std::string imie,int &meskie, int &zenskie) -> void
{
    if (imie[imie.size()-1] == 'a' || imie[imie.size()-1] == 'A'){
    zenskie = zenskie + 1;;
    }
    else{
    meskie = meskie +1;
    }
}
