#include <iostream>
#include <algorithm>




void funkcja(void* ta)
{
    auto proxy = reinterpret_cast<char*>(ta);
    std::cout<<"Funkcja przed sortowaniem: ";
    std::cout<<proxy;

    std::cout<<"\n";
}

auto fpsort(void* tab,int size,void(*fp)(void* ta)) -> void
{
    (fp)(tab);
    auto proxy = reinterpret_cast<char*>(tab);


   std::sort(proxy , proxy+21);        // nie wiem dlaczego po (proxy, proxy+sizeof(proxy)) sortuje tylko czesc tablicy.

    std::cout<<"Funkcja po sortowaniu:";
    std::cout<<proxy;
    std::cout<<"\n";


}

int main()
{
    char tab[22]="tekst nie posortowany";
    fpsort(tab,22,funkcja);
    return 0;

}

