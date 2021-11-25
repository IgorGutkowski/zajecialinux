#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    auto ve = std::vector<int>();
    int a;
    std::cout<<"Podaj iloma liczbami chcesz zapelnic tablice: \n";
    std::cin>>a;

    float rozmiar = a;

    for (int i =0; i < a; i++)
    {
        int b = rand() % a + 1;
        ve.push_back(b);
    }

    for (int i =0; i < a; i++)
    {
        std::cout<<ve.at(i)<<"\n";;
    }


    float srednia = 0.0;

    for(int i=0;i<rozmiar;i++)
    {
        srednia = srednia + ve.at(i);
    }
    srednia = srednia/rozmiar;

    std::cout<<"Srednia arytmetyczna = "<<srednia<<"\n";

return 0;
}

