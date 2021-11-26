#include <iostream>

void swap(int *wskaznik1, int *wskaznik2);

int main()
{
    int *wsk1, *wsk2, x, y;
    x=1;
    y=2;
    wsk1 = &x;
    wsk2 = &y;
    std::cout<<"Wartosc x i y = "<<*wsk1<<" i "<<*wsk2 << std::endl;
    swap(wsk1,wsk2);
    std::cout<<"Wartosc x i y po zamianie = "<<*wsk1<<" i "<<*wsk2 << std::endl;

return 0;
}

void swap(int *wskaznik1, int*wskaznik2)
{
    int wartosc1 = *wskaznik1;
    int wartosc2 = *wskaznik2;
    *wskaznik1 = wartosc2;
    *wskaznik2 = wartosc1;

}
