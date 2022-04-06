#include <stdio.h>

int pierwsza(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    for (int i=2; i*i<=n; i++)
        if(n%i == 0) return 0;
    return 1;
}

int ciag_pierwsze(int i){
    int previous, current;
    previous = i % 10;
    i /= 10;
    while(i>0) {
        current = i % 10;
        if(previous< current){
        return 0;
        }
        i/=10;
        previous = current;
    }
    return 1;
}

int main(void){
    int n;
    printf("Podaj liczbe n: \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        if(pierwsza(i) && ciag_pierwsze(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}
