#include <iostream>

void quicksort(int tab[],int poczatek,int koniec)
{
int pivot = tab[(poczatek+koniec)/2];                // pivot - środkowy element tablicy
int p=(poczatek - 1);                                // p - pierwszy element tablicy
int q=(koniec + 1);                                  // q - ostatni element tablicy
do{

    while (tab[++p]<pivot);           //taki zapis poniewaz nie moze byc tab[-1]. Jesli tab[p] < pivot to zwiekszamy p, szukamy pierwszego elementu wiekszego/rownego po lewej od pivota

    while (tab[--q]>pivot);                         // jesli tab[q] > pivot to zmniejszamy q, szukamy mniejszego/rownego po prawej stronie pivota

    if (p<=q) // partycjujemy tablice
    {
    std::swap(tab[p], tab[q]);                       // przerzucamy p na druga strone pivota (wieksze na prawo, mniejsze na lewo)
    }
}while (p<=q);                                       // jesli p>q to ta partycja jest posortowana


 if (q>poczatek)
 {
     quicksort(tab,poczatek, q);                     // od poczatku tej partycji do q
 }
 if (p<koniec)
 {
     quicksort(tab, p, koniec);                      // od p do konca tej partycji
 }
 
}
int main()
{
    int tab[64];
    std::cout<<"Tablica przed sortowaniem:\n";
     for(int i=0;i<64;i++)
        {
            tab[i] =  rand() % 64+1;            // losowe w zakresie 0 - 63
            std::cout<<tab[i]<<"\n";
        }
    std::cout<<"Posortowana tablica: \n";
    quicksort(tab ,0, 63);                     // sortowanie
    for(int i = 0; i < 64; i++)
    {
    std::cout<<tab[i]<<"\n";
    }
return 0;
}
