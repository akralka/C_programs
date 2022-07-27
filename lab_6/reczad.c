#include <stdio.h>
#include <stdlib.h>

void tab(int n,int** arr, int arr_2[200][200]){

    for (int i = 0; i < (2 * n)-1; i+=2) {
//        x1 < x2 i y1 < y2
        if ((arr[i][0] < arr[i + 1][0])   && (arr[i][1] < arr[i + 1][1])) {
            for(int j = arr[i][0]; j < arr[i + 1][0]; j++){
                for(int k = arr[i][1]; k < arr[i + 1][1]; k++){
                    arr_2[j][k+1] = (arr_2[j][k+1]+1)%2;
                }
            }
        }
        //        x1 < x2 i y1 > y2
        if ((arr[i][0] < arr[i + 1][0])   && (arr[i][1] > arr[i + 1][1])) {
            for(int j = arr[i][0]; j < arr[i + 1][0]; j++){
                for(int k = arr[i + 1][1]; k < arr[i][1]; k++){
                    arr_2[j][k+1] = (arr_2[j][k+1]+1)%2;
                }
            }
        }
//        x1 > x2 i y1 < y2
        if ((arr[i][0] > arr[i + 1][0])   && (arr[i][1] < arr[i + 1][1])) {
            for (int j = arr[i + 1][0]; j < arr[i][0]; j++) {
                for (int k = arr[i][1]; k < arr[i + 1][1]; k++) {
                    arr_2[j][k+1] = (arr_2[j][k+1]+1)%2;
                }
            }
        }
        //        x1 > x2 i y1 > y2
        if ((arr[i][0] > arr[i + 1][0])   && (arr[i][1] > arr[i + 1][1])) {
            for (int j = arr[i + 1][0]; j < arr[i][0]; j++) {
                for (int k = arr[i + 1][1]; k < arr[i][1]; k++) {
                    arr_2[j][k+1] = (arr_2[j][k+1]+1)%2;
                }
            }
        }
    }
}
void suma(int n,int arr_2[200][200]){
    int sum = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            sum += arr_2[i][j];
        }
    }
    printf("%d", sum);

}

int main() {
    int n, x, y;
    int arr_2[200][200];
    for(int a = 0; a < 200; a++){
        for(int b = 0; b < 200; b++){
            arr_2[a][b] = 0;
        }}
    printf("Enter number of rectangles:");
    scanf("%d", &n);
    int** arr = (int**)malloc(sizeof(int*)*n*2);
    for(int i = 0; i < n*2; i++){
        arr[i] = (int*)malloc(sizeof(int)*2);
    }
    printf("Enter the coordinates of the opposite vertices of the rectangles:");
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &x);
        scanf("%d", &y);
        arr[i][0] = x + 100;
        arr[i][1] = y + 100;
    }


    tab(n, arr, arr_2);
    suma(n, arr_2);

};
