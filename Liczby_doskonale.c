#include <stdio.h>

int main() {
    int suma, x;
    printf("Podaj zakres: \n");
    scanf("%d", &x);

    int ilosc_liczb = 0;

    for (int i = 1; i <= x; i++) {
        suma = 0;
        for (int j = 1; j <= (i / 2); j++)
            if (i % j == 0) {
                suma += j;
            }
        if (suma == i) {
            printf("Liczba doskonala to:  %d\n", i);
            ilosc_liczb ++;
        }
    }
    printf("Tych liczb jest: %d\n ", ilosc_liczb);
    return 0;
}
