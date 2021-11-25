#include <iostream>

void koniec(int n);
void srodek(int n);

int main()
{
        koniec(20);
        srodek(4);
        koniec(20);
    return 0;
}

void koniec(int n)
{
    for(int i=0; i<n; i++)
    {
        std::cout<<"-";
    }
    std::cout<<"\n";
}

void srodek(int n)
{
    for(int i=1; i<=n; i++)
    {
        if( i%2!=0)
        {
        std::cout<<"I***   ***   ***   I"<<"\n";
        std::cout<<"I***   ***   ***   I"<<"\n";
        }
        else
        {
        std::cout<<"I   ***   ***   ***I"<<"\n";
        std::cout<<"I   ***   ***   ***I"<<"\n";
        }
    }
}






