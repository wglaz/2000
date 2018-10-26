#include <stdio.h>


int main() {
    int licznik_petli = 0;
    int x;
    {
        printf("podaj liczbe do sprawdzenia: \n");
        scanf("%i", &x);

        if(!(x%2))// sprawdzenie czy liczba jest liczba parzysta
        x-=1; {    // jesli jest parzysta zmniejszamliczbe o 1
        for (&x; x >= 0; x-=2){

            if ( x % 3 && x % 5 && x % 7) break;{

                printf("%d\n ", x);
                ++licznik_petli;



            }
        }}

    }
printf("\n");
printf("liczba petli wyniosła: %d\n", licznik_petli);

    return 0;
}