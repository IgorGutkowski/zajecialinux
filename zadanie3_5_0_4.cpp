#include <iostream>
#include <string>

auto print_int(void* a)
{
    auto proxy = reinterpret_cast<int*>(a);

    for (int i = 0; i < 4; i++)
        {
        std::cout << proxy[i]<<" ";
        }
        std::cout<<"\n";
}

auto print_str(void* a)
{
     auto proxy = reinterpret_cast<std::string*>(a);

    for (int i = 0; i < 4; i++)
        {
        std::cout << proxy[i]<<" ";
        }
        std::cout<<"\n";
}

auto fpprint(void* a,void(*fp)(void*a))
{
    (fp)(a);
}

auto main() -> int
{

int tabint[4] = {1, 2, 3, 4};

std::string tabstr[4] = {"string1", "string2",
                        "string3", "string4"};

fpprint(tabint,print_int);
fpprint(tabstr,print_str);

return 0;


}
