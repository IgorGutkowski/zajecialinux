#include <iostream>
#include <array>

int main()
{

    std::array<char, 94> A;
    for(int i=0; i<94; i++)
    {

        A.at(i)= char(i);
        std::cout<<A.at(i);
    }


    return 0;
}
