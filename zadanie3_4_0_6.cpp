#include <iostream>
#include <string.h>

void *memset(void *ptr, int x, size_t n);               // ptr ==> Starting address of memory to be filled
                                                        // x   ==> Value to be filled
                                                        // n   ==> Number of bytes to be filled starting from ptr to be filled
  int main()
  {
    std::cout<<"Tablica przed uzyciem memset: ";
    char tab[50] = "Najlepsza woda to Muszynianka";
    puts (tab);                                         // puts zastepuje petle i cout do wyswietlenia zawartosci stringa


    memset(tab + 18,22, 11*sizeof(char));               // (tab +18 - zaczynamy od 19 bajtu tablicy tab czyli tab[18]) (22 - w ich miejsce wstawiamy te wartosc) (7*sizeof(char) - 7 bajtow zamieniamy)
    std::cout<<"Tablica po uzyciu memset: ";
    puts (tab);

return 0;
  }
