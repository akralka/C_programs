#include <stdio.h>
int suma_dz (int n) {
    int result = 0;
    for (int i=1; i<n; i++)
        if(!(n%i)) result += i;
    return result;
}

int doskonale[100];

int main(void){
    int n, sum=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if(i == suma_dz(i)){
            doskonale[sum] = i;
            sum += 1;
        }
    }
    printf("Liczb doskonalych w pzedziale jest %d: ", sum);
    for (int i=0; i<sum; i++) printf("%d ", doskonale[i]);
    printf("\n");
    return 0;
}



