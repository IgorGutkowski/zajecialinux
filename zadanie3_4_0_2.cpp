#include <iostream>
#include <string>

void print(std::string *tab)
{
    std::cout <<& *tab<< " = " << *tab << std::endl;

}
int main()
{
    std::string zmienna = "Hello, World!";
    std::string * wsk;
    wsk = &zmienna;

    print(wsk);


return 0;
}
