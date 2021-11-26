#include <iostream>
#include <string>

int main()
{
    std::string zmienna = "Igor Gutkowski";
    std::string * wskaznik;
    wskaznik =&zmienna;

    std::cout << "wartosc zmiennej = " << *wskaznik << std::endl;
    std::cout << "adres zmiennej = " <<& *wskaznik << std::endl;
    std::cout << "rozmiar zmiennej = " << sizeof(*wskaznik) << std::endl;
    std::cout << "wartosc wskaznika = " << wskaznik << std::endl;
    std::cout << "adres wskaznika = " <<& wskaznik << std::endl;
    std::cout << "rozmiar wskaznika = " << sizeof(wskaznik) << std::endl;

    return 0;
}
