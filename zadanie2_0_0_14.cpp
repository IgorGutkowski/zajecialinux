#include <iostream>
auto main() -> int
{
    int n;
    std::cout<<"Podaj d�ugo�� boku kwadratu: \n";
    std::cin>>n;

    for(int i=0;i<n;i++)        // ta p�tla utworzy g�rn� podstaw� o d�ugos�i n gwiazdek
    {
        std::cout<<"*";
    }
        std::cout<<"\n";

    for(int j=0;j<n-2;j++) //ta petla utworzy boki kwadratu -2 poniewaz ich gwiazdki pokrywaja sie z podstawami(kt�rych jest2)
    {
        std::cout<<"*";
                        for(int j=0;j<n-2;j++)  // ta petla utworzy pomi�dzy dwiema gwiazdkami puste pola w ilosci -2(bo tyle gwiazdek jest)
                        {
                            std::cout<<" ";
                        }
        std::cout<<"*\n";
    }
    for(int k=0;k<n;k++) //ta petla utowrzy dolna podstawe o dlugosci n gwiazdek
    {
        std::cout<<"*";
    }
return 0;
}
