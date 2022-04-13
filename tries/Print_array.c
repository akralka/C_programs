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

