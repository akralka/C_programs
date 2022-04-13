#include <stdio.h>

int main(void) {
    int x=0, y=1;
    int a;
    printf("Podaj liczbe:  \n");
    scanf("%d", &a);
    while (x * y <= a) {
        if (x * y == a) {
            printf("Twoja liczba jest iloczynem dwoch kolejncyh liczb fibonacciego:\n %d = %d * %d\n", a, x, y);
            return 0;
        }
        int tmp = y;
        y = x + y;
        x = tmp;
    }
    printf("Twoja liczba nie jest iloczynem dwoch kolejnych liczb fibonacciego! \n");
    return 0;
}