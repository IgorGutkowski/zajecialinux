#include <iostream>
#include <algorithm>
#include <vector>


int copyTableToVector(int tab[100][8], int indeks);

int main()
{
    int tablica[100][8];
    int indeks;

    for(int i=0;i<100;i++)
    {
        for(int j=0;j<8;j++)
        {
            tablica[i][j]= rand() % 9+1;                        // implementacja losowymi od 0 do 9
            std::cout<<tablica[i][j]<<" ";                      // wywsietlenie tablicy ulatwi sprawdzenie czy funkcja zwrocila odpowiednia wartosc
        }
        std::cout<<"\n";

    }

    std::cout<<"Podaj indeks \n";
    std::cin>>indeks;

    std::cout<<"Funkcja zwraca: \n"<<copyTableToVector(tablica, indeks);



    return 0;
}


int copyTableToVector(int tab[100][8],int indeks)
{
    int reszta;
    std::vector<int> wektor;


    reszta = indeks % 3;

                        if(reszta == 0)
                        {
                        reszta = 5;
                        }

    for(int j=0; j<8;j++)
    {
        int a = tab[reszta-1][j];                            // reszta wyznacza numer wiersza ale pierwszy wiersz to [0] a nie [1] stad -1
       wektor.push_back(a);
    }
 int *wsk;
 wsk =&wektor.back();
 int r = *wsk;                                           // funkcja ma zwracac wskaznik na koniec wektora
 return r;
}
