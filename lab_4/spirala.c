#include <stdio.h>

int main() {
    int n;
    printf("Enter size of the array: \n");
    scanf("%d", &n);
    int tab[n][n];
    int k = 1;
    for (int p =0; p<(n/2 +1); p++){  

    for (int i = p; i < n-p; i++) {
        tab[p][i] = k;
        k++;
        }

        for (int i = p + 1; i < n-p; i++) {
                tab[i][n-p-1] = k;
                k++;
            }

        for (int i =n-p-2; i >= p; i--) {
                tab[n-p-1][i] = k;
                k++;
            }
        for (int i = n-p-2; i>= p+1; i--) {
                tab[i][p] = k;
                k++;
        }}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}



