#include <iostream>
#include <algorithm>


void funkcja(int *tab,int size)
{
    std::cout<<"Funkcja przed sortowaniem: ";
    for(auto i =0; i< size; i++)
    {
        std::cout<<tab[i]<<" ";
    }
    std::cout<<"\n";
}

auto fpsort(int tab[],int size,void(*fp)(int *tab, int size)) -> void
{

    (fp)(tab,10);
    std::sort(tab,tab+size);
    std::cout<<"Funkcja po sortowaniu: ";
    for(auto i =0; i< size; i++)
    {
        std::cout<<tab[i]<<" ";
    }
    std::cout<<"\n";


}

int main()
{
    int tab[10]={4, 3, 5, 2, 6, 4, 5, 6, 8, 3};

    fpsort(tab,10,funkcja);
    return 0;
}
