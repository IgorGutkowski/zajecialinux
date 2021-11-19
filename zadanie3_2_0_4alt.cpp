#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    auto ve = std::vector<int>();

    for (int i =0; i < 64; i++)
    {
        int b = rand() % 64 + 1; // ka¿demu elementowi wektora od 0 do 63 przypisze wartosc losowa od 0 do 64
        ve.push_back(b);
        // opcjonalny podglad std::cout<<ve[i]<<std::endl;
    }

    std::cout<<"Przed sortowaniem"<<std::endl;
   for (int i= 0; i <64; i++)
   {
      std::cout<<ve.at(i)<<std::endl;
   }
      std::cout<<"Po sortowaniu"<<std::endl;
      std::sort(ve.begin(), ve.end(), std::greater<int>()); // posortuje vector ve od najwiekszej do najmniejszej
   for (int i= 0; i <64; i++)
   {
      std::cout<<ve.at(i)<<std::endl; 
   }

return 0;
}
