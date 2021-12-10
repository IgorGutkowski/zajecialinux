#include <iostream>
#include <algorithm>
#include <stdlib.h> // malloc, free
#include <string.h> // strlen

void memrev(void* ta,size_t l)
{
    auto proxy = reinterpret_cast<char*>(ta);

    char r[l];

    for(int i = 0; i < l; i++)
    {
    r[i] = proxy[l - 1 - i];
    }

    for(int i = 0; i < l; i++)
    {
    proxy[i] = r[i];
    }
    std::cout<<proxy;
}


int main()
{
    char tab[]="tekst nie posortowany";
    memrev(tab,strlen(tab));
    return 0;

}
