#include <stdio.h>


int main() {
    int licznik_petli = 0;

        for (int x =1000; x>=0; --x) {
            licznik_petli++;
            if(x%2 && x%3 && x%5 && x%7){

                printf("%d\n ", x);


            
            break;}
        }


printf("\n");
printf("liczba petli wyniosła: %d\n", licznik_petli);

    return 0;
}