// enter number <1,10>
#include <stdio.h>

int t[10] = {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
int k, p;
int n =10;

int main(){

    printf("First number index:\n");
    scanf("%d", &k);
    printf("Ascending order: choose 1    Descending order: choose 11 \n");
    scanf("%d", &p);

    if(p == 1){
        for(int* tab=t+k; tab < t+n; tab++){
            printf("%d ", *tab);
        }
        for(int* tab=t; tab< t+k; tab++){
            printf("%d ", *tab);
        }
    }
    else if(p == 11){
        for(int* tab= t + k; tab >= t; tab--){
            printf("%d ", *tab);
        }
        for(int* tab= t + n - 1; tab > t + k; tab--){
            printf("%d ", *tab);
        }
    }

    return 0;
}



// modified - enter number <1,10>
// #include <stdio.h>


// int main() {
//     int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k;
//     int n;
//     int order;

//     // pobieramy od uzytkownika indeks pierwszego elementu, dlugosc tabeli i kolejnosc
//     printf("Enter index of the first number:\n");
//     scanf("%d", &k);
//     printf("Enter the length of the table:\n");
//     scanf("%d", &n);
//     printf("Enter 0 for ascending order or 1 for descending order: \n");
//     scanf("%d", &order);
//     printf("Our table: \n");

//     // sprawdzamy czy uzytkownik chce tabele rosnaca czy malejaca i ja printujemy
//     if(order == 0){
//         for(int* i=tab+k; i < tab+n+1; i++){
//             printf("%d ", *i);
//         }
//         for(int* i=tab; i< tab+k; i++){
//             printf("%d ", *i);
//         }
//     }
//     else if(order == 1){
//         for(int* i=tab+k; i >= tab; i--){
//             printf("%d ", *i);
//         }
//         for(int* i=tab+n; i > tab+k; i--){
//             printf("%d ", *i);
//         }
//     }
//     return 0;
// }

