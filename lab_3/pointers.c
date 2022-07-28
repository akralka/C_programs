#include <stdio.h>

int main() {
    int tab1[10];
    double tab2[10];
    printf("Enter 10 integers numbers to array: \n");
    for(int i=0; i<10; i++){
        scanf("%d", &tab1[i]);
    }
    fflush(stdout);

    printf("Enter 10 double numbers to array: \n");
    for(int i=0; i<10; i++){
        scanf("%lf", &tab2[i]);
    }

    printf("Integer table:\n");
    for(int* i=tab1; i<(tab1+10); i++){
        printf("%d, ", *i);
    }

    printf("\nAddresses of integers from the table 1:\n");
    for(int* i=tab1; i<(tab1+10); i++){
        printf("%d, ", i);
    }

    printf("\nDouble table:\n");
    for(double* i=tab2; i<(tab2+10); i++){
        printf("%f, ", *i);
    }

    printf("\nAddresses of doubles from table 2:\n");
    for(double* i=tab2; i<(tab2+10); i++){
        printf("%d, ", i);
    }

    return 0;
}
