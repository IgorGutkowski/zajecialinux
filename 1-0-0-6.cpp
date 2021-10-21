#include <iostream>
auto main() -> int
{
	int l1,l2;
		
		std::cout<<"Podaj liczbę:\n";
		std::cin>>l1;
		
		std::cout<<"Podaj kolejną liczbę:\n";
		std::cin>>l2;
		
	if(l1 == l2) 
		std::cout<< "Relacja tych liczb to:\n"<<l1 << "=" << l2 << "\n";
		
	if(l1 >> l2) 
		std::cout<< "Relacja tych liczb to:\n"<<l1 << ">" << l2 << "\n";
	
	if(l1 << l2) 
		std::cout<< "Relacja tych liczb to:\n"<<l1 << "<" << l2 << "\n";
	
}
