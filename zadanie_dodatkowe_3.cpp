#include <iostream>
#include <string>

auto count_chars(std::string str, char znak) -> int{
    int ilosc = 0;
    for(int i =0; i<str.size();i++){
        if(str[i] == znak)
        {
          ilosc = ilosc +1;
        }
}

    return ilosc;
}

auto main() -> int{
    std::string str1;
    std::cout<<"Podaj dowolny wyraz.\n";
    std::cin>>str1;
    char znak1;
    std::cout<<"Podaj litere: \n";
    std::cin>>znak1;

    std::cout<<"Ilosc "<<"["<<znak1<<"]"<<" w tym wyrazie wynosi: "<<count_chars(str1,znak1)<<"\n";

    return 0;
}
