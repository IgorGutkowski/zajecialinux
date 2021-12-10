#include <iostream>
#include <algorithm>


void funkcja(void *tab,void *size)
{
    auto proxy = reinterpret_cast<int*>(tab);
    auto proxy[2] = reinterpret_cast<int>(size);
    std::cout<<"Funkcja przed sortowaniem: ";
    for(auto i =0; i< size; i++)
    {
        std::cout<<tab[i]<<" ";
    }
    std::cout<<"\n";
}

auto fpsort(int tab[],int size,void(*fp)(void *tab ,void size)) -> void
{

    (fp)(tab, size);
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
