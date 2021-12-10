#include <iostream>
#include <algorithm>
#include <string.h>




void funkcja(void* ta)
{
    auto proxy = reinterpret_cast<char*>(ta);
    std::cout<<"Funkcja przed sortowaniem: ";
    std::cout<<proxy;

    std::cout<<"\n";
}

auto fpsort(void* tab,size_t l,void(*fp)(void* ta)) -> void
{
    (fp)(tab);
    auto proxy = reinterpret_cast<char*>(tab);


   std::sort(proxy , proxy+l);

    std::cout<<"Funkcja po sortowaniu alfabetycznie:";
    std::cout<<proxy;
    std::cout<<"\n";


}

int main()
{
    char tab[]="tekst nie posortowany";
    fpsort(tab,strlen(tab),funkcja);
    return 0;

}
