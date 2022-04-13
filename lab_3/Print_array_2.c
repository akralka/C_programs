#include <stdio.h>


int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k;
    int n;
    int order;

    // pobieramy od uzytkownika indeks pierwszego elementu, dlugosc tabeli i kolejnosc
    printf("Enter index of the first number:\n");
    scanf("%d", &k);
    printf("Enter the length of the table:\n");
    scanf("%d", &n);
    printf("Enter 0 for ascending order or 1 for descending order: \n");
    scanf("%d", &order);
    printf("Our table: \n");

    // sprawdzamy czy uzytkownik chce tabele rosnaca czy malejaca i ja printujemy
    if(order == 0){
        for(int* i=tab+k; i < tab+n+1; i++){
            printf("%d ", *i);
        }
        for(int* i=tab; i< tab+k; i++){
            printf("%d ", *i);
        }
    }
    else if(order == 1){
        for(int* i=tab+k; i >= tab; i--){
            printf("%d ", *i);
        }
        for(int* i=tab+n; i > tab+k; i--){
            printf("%d ", *i);
        }
    }
    return 0;
}
