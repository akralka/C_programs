#include <stdio.h>

int tab_1 [10] = {23, 54, 45, 26, 34,87, 254, 98, 101, 43};
double tab_2 [10] = {23.567, 56.827, 37.4556, 43.76, 465.87687, 234.345, 435.6746, 123.32456, 4637.87967, 3980.23301};

void modify(int *arg)
{
    printf("Integer table: \n");
    for(int i = 0; i < 10; i++) {
        printf("%d, ", *(arg++));
    }

    printf("\nAddresses of integers from the integer table:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d, ", arg++);
    }
}

void modify_2(double *argg)
{
    printf("\nDouble table: \n");
    for(int i = 0; i < 10; i++) {
        printf("%f, ", *(argg++));
    }

    printf("\nAddresses of integers from the double table:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d, ", argg++);
    }
    printf("\n");
}

int main()
{
    modify(tab_1);
    modify_2(tab_2);
    return 0;
}


