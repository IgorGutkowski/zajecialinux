#include <iostream>

void XY(int a,int b)
{
    std::cout<<a*2<<" i "<<b+100<<"\n";
}


int main()
{
    int aa, bb;

    std::cout<<"Podaj a: \n";
    std::cin>>aa;
    std::cout<<"Podaj b: \n";
    std::cin>>bb;
    XY(aa,bb);
    return 0;
}
