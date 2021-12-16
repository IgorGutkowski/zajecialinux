#include <iostream>
#include <string>

void Podaj();
void wypisywacz(std::string str);
void box_print(int l,std::string str1,std::string str2,std::string str3,std::string str4,std::string str5);

auto main() -> int{

    std::string s1,s2,s3,s4,s5;
    int dlugosc;

    Podaj();
    std::cin>>s1;
    Podaj();
    std::cin>>s2;
    Podaj();
    std::cin>>s3;
    Podaj();
    std::cin>>s4;
    Podaj();
    std::cin>>s5;

    std::cout<<"Podaj dlugosc ramki: ";
    std::cin>>dlugosc;

    box_print(dlugosc,s1,s2,s3,s4,s5);

    return 0;
}

void Podaj()
{
    std::cout<<"Podaj wyraz: \n";
}

void wypisywacz(int l,std::string str)
{
    std::cout<<"*";
    for(auto i=0;i<l-2;i++){
        if(i<str.size()){
    std::cout<<str[i];
    }
        else{
            std::cout<<" ";
        }
    }
    std::cout<<"*\n";
}

auto box_print(int l,std::string str1,std::string str2,std::string str3,std::string str4,std::string str5) -> void
{
    for(auto i=0;i<l;i++){
    std::cout<<"*";
    }
    std::cout<<"\n";

   wypisywacz(l,str1);
   wypisywacz(l,str2);
   wypisywacz(l,str3);
   wypisywacz(l,str4);
   wypisywacz(l,str5);

     for(auto i=0;i<l;i++){
    std::cout<<"*";
    }
    std::cout<<"\n";
}
