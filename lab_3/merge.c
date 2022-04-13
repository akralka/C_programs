#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void bubbleSort(int t[], int N){
    int f = 0;
    int x;
    for(int i=0; i<N; i++){
        f = 0;
        for(int j=0; j<N-i-1; j++){
            if(t[j] > t[j+1]){
                f = 1;
                x = t[j];
                t[j] = t[j+1];
                t[j+1] = x;
            }
        }
        if(!f){
            break;
        }
    }
}


int writeArray(int t[], int N){
    for(int i=0; i<N; i++){
        printf("%d, ", t[i]);
    }
    printf("\n");
}


int merge(int t1[], int N1, int t2[], int N2, int t[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<N1 && j<N2){
        if(t1[i] <= t2[j]){
            if(k == 0 || t[k-1] != t1[i]) {
                t[k] = t1[i];
                k += 1;
            }
            i += 1;
        } else {
            if(k == 0 || t[k-1] != t2[j]) {
                t[k] = t2[j];
                k += 1;
            }
            j += 1;
        }
    }
    if(i == N1){
        while(j < N2){
            if(k == 0 || t[k-1] != t2[j]) {
                t[k] = t2[j];
                k += 1;
            }
            j += 1;
        }
    } else {
        while(i < N1){
            if(k == 0 || t[k-1] != t1[i]) {
                t[k] = t1[i];
                k += 1;
            }
            i += 1;
        }
    }
    return k;
}


#define N1 5
#define N2 7


int main() {
    int t1[N1];
    int t2[N2];
    srand(time(NULL));
    for(int i = 0; i < N1; i++){
        t1[i] = rand() % 11;
    }
    writeArray(t1, N1);
    for(int j = 0; j < N2; j++){
        t2[j] = rand() % 11;
    }
    writeArray(t2, N2);
    int t[N1+N2];
    int N;
    bubbleSort(t1, N1);
    bubbleSort(t2, N2);
    N = merge(t1, N1, t2, N2, t);
    writeArray(t, N);
    return 0;
}
