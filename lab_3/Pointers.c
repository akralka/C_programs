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

// modified

// #include <stdio.h>

// int main() {
//     int tab1[10];
//     double tab2[10];
//     printf("Enter 10 integers numbers to array: \n");
//     for(int i=0; i<10; i++){
//         scanf("%d", &tab1[i]);
//     }
//     fflush(stdout);

//     printf("Enter 10 double numbers to array: \n");
//     for(int i=0; i<10; i++){
//         scanf("%lf", &tab2[i]);
//     }

//     printf("Integer table:\n");
//     for(int* i=tab1; i<(tab1+10); i++){
//         printf("%d, ", *i);
//     }

//     printf("\nAddresses of integers from the table 1:\n");
//     for(int* i=tab1; i<(tab1+10); i++){
//         printf("%d, ", i);
//     }

//     printf("\nDouble table:\n");
//     for(double* i=tab2; i<(tab2+10); i++){
//         printf("%f, ", *i);
//     }

//     printf("\nAddresses of doubles from table 2:\n");
//     for(double* i=tab2; i<(tab2+10); i++){
//         printf("%d, ", i);
//     }

//     return 0;
// }

