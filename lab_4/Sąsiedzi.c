#include <stdio.h>

void print_1(int n, int arr[n][n]){
    for(int i=0; i<n; i++) {
        for(int j=0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int n, r;
    printf("Enter size of the array :");
    scanf("%d", &n);
    printf("Enter distance:");
    scanf("%d", &r);

    int arr[n+2*r][n+2*r];
    for(int i=0; i<n+2*r; i++) {
        for(int j=0; j<n+2*r; j++){
            arr[i][j] = 0;
        }
    }

    printf("Enter array:");
    for(int i=r; i<n+r; i++) {
        for(int j=r; j<n+r; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    print_1(n + 2 * r, arr);
    printf("\n");

    int arr_1[n][n];
    for(int i=r; i<n+r; i++) {
        for(int j=r; j<n+r; j++) {
            int b = 0;
            for(int a= i - r; a < i + r + 1; a++) {
                for(int l=j-r; l<j+r+1; l++) {
                    b = b + arr[a][l];
                    arr_1[i - r][j - r] = b;
                }
            }
        }
    }
    print_1(n, arr_1);
    return 0;
}