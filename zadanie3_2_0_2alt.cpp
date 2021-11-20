#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n, rozmiar, j;
    auto ve = std::vector<int>();

    do
    {
        std::cout<<"Podaj liczbe: \n";
        std::cin>>n;
        ve.push_back(n);
    }while(n!=0);

    rozmiar = (ve.size()-1);
    
    j = 0;
    
    do
    {
        std::cout<<ve.at(j)<<" ";
        j++;
        if((j%5==0))
        {
            std::cout<<"\n";
        }
    }while(j < rozmiar);

return 0;
}
