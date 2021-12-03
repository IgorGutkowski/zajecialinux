#include <iostream>
#include <random>
#include <ctime>


void funkcja(int const);
void call_with_random_int(void(*fp)(int const)) ;

int main()
{


   auto fp = &funkcja;                  // wskaznik na funkcje


   call_with_random_int(funkcja);
   return 0;

}

void call_with_random_int(void(*fp)(int const))         // wywoluje funkcje ktora wskazuje wskaznik fp dla argumentu podanego w ciele funkcji (fp)(argument wskazany w ciele)
{
    srand((int)time(0));                    // liczba losowana z rand bedzie inna za kazdym uruchomieniem programu
    int losowaliczba;
    losowaliczba = (rand() % 100) +1;

    (fp)(losowaliczba);
}

void funkcja(int const a)
{
    std::cout<<"Przekazano do funkcji: "<<a<<"\n";
}
