#include <cmath>
#include <iostream>
float stozek(float h, float r, float R)
{
    float V;
    V = ((M_PI / 3) * h)* ((R * R) + (R * r) + (r * r));
    return V;
}
int main()
{
    while(true)
    {
        float h, R, r;

            std::cout<<"Podaj wysokosc:\n";
                std::cin>>h;

            std::cout<<"Podaj promien gornej podstawy:\n";
                std::cin>>r;

            std::cout<<"Podaj promien dolnej podstawy:\n";
                std::cin>>R;

            std::cout<<"Pojemnosc stozka scietego wynosi: "<<stozek(h, r, R)<<"\n";

        int n;
    std::cout<<"Wpisz dowolny znak rozny od zera. Wpisz 0, aby wylaczyc.\n";
    std::cin>>n;

        if(n==0)
        {
        break;
        }

    }
return 0;
}


