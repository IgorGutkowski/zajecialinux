#include <iostream>
#include <array>

int main()
{

    std::array<char, 94> A;
    for(int i=33; i<=126; i++)
    {

        A.at((i-33))= char(i);
        std::cout<<A.at(i-33);
    }


    return 0;
}



