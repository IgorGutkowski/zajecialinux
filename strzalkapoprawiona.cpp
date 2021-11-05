#include <iostream>
auto main() -> int
{
    int a,i,j,k;

    std::cout<<"Podaj długość strzałki: \n";
    std::cin>>a;

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        for(k=a;k>i;k--)
        {
            std::cout<<"-";
        }
    std::cout<<"\n";
    }
    
   
    
    for(i=a;i>=1;i--)
    {
	      for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        for(k=a;k>i;k--)
        {
            std::cout<<"-";
        }
		std::cout<<"\n";
	}
return 0;
}
