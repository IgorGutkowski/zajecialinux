#include <iostream>
#include<string>

auto zenskiemeskie(std::string imie,int &meskie, int &zenskie) -> void
{

    if (imie[imie.size()-1] == 'a' || imie[imie.size()-1] == 'A'){
    zenskie = zenskie + 1;;
    }
    else{
    meskie = meskie +1;
    }

}

int main()
{
    int meskie, zenskie;
    meskie = 0;
    zenskie = 0;

    std::string imie1;
    std::string imie2;
    std::string imie3;
    std::string imie4;
    std::string imie5;


     std::cout<<"Podaj imie: \n";
     std::cin>>imie1;
     std::cout<<"Podaj imie: \n";
     std::cin>>imie2;
     std::cout<<"Podaj imie: \n";
     std::cin>>imie3;
     std::cout<<"Podaj imie: \n";
     std::cin>>imie4;
     std::cout<<"Podaj imie: \n";
     std::cin>>imie5;

     std::string tab[5] = {imie1,imie2,imie3,imie4,imie5};


    for(int i =0;i<5;i++){
    zenskiemeskie(tab[i],meskie,zenskie);

    }

    std::cout<<"Ilosc imion meskich wsrod podanych: "<<meskie<<"\n";
    std::cout<<"Ilosc imion zenskich wsrod podanych: "<<zenskie<<"\n";

return 0;
}
