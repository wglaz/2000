#include <stdio.h>


int main() {
    int licznik_petli = 0;

        for (int x = 0; x<=2000; ++x) {
            if(x%2 && x%3 && x%5 && x%7)
            printf("%d\n ", x);


            licznik_petli++;
        }


printf("\n");
printf("liczba petli wyniosła: %d\n", licznik_petli);

    return 0;
}