#include <stdio.h>

int main(void) {
    int suma, x;
    printf("Podaj zakres: \n");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        suma = 0;
        for (int j = 1; j <= (i / 2); j++)
            if (i % j == 0) {
                suma += j;
            }
        if (suma == i) {
            printf("Liczba doskonala to:  %d\n", i);
        }
    }
    return 0;
}
