#include <iostream>
auto main() -> int
{
	int l1,l2,l3,l4,l5,l6,i,x;
		
		std::cout<<"Podaj 6 liczb:\n";
		std::cin>>l1>>l2>>l3>>l4>>l5>>l6;
		
		
		
	for(int i=1;i<=5;i++)
	{
	if(i==1) x=l2;
	if(i==2) x=l3;
	if(i==3) x=l4;
	if(i==4) x=l5;
	if(i==5) x=l6;
		if(l1==x)
		std::cout<<l1<<"=="<<x<<"\n";
		else if(l1<x)
		std::cout<<l1<<"<"<<x<<"\n";
		if(l1>x)
		std::cout<<l1<<">"<<x<<"\n";
	}
		
	

return 0;
}
