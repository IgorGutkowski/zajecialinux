#include <iostream>
#include <string>

auto is_palindrome(std::string str) -> bool;

auto main() -> int
{
    std::string str1;
    std::cout<<"Podaj wyraz: \n";
    std::cin>>str1;
    std::cout<<is_palindrome(str1);
    return 0;
}

auto is_palindrome(std::string str) -> bool{

std::string rev;

for(auto i=0;i<str.size();i++)
{
    rev[i] = str[i];
}

for(auto i =0; i < str.size()/2; i++)
{   auto tmp = str[i];
    rev[i] = str[str.size()-1-i];
    rev[str.size() -1 -i] = tmp;
}

int licznik = 0;

for(auto i =0;i<str.size();i++)
{
    if(str[i]==rev[i])
    {
        licznik= licznik + 1;
    }
}

    if(licznik == str.size()){
        return true;
    }

    else{
        return false;
    }

}
