#include <iostream>

int XY(int a,int b);


int main()
{
    int aa, bb;

    std::cout<<"Podaj a: \n";
    std::cin>>aa;
    std::cout<<"Podaj b: \n";
    std::cin>>bb;
    std::cout<<XY(aa,bb)<<"\n";
    return 0;
}

int XY(int a,int b)
{
   return (a*2) + (b+100);

}
