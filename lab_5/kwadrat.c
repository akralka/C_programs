// The first method

#include <stdio.h>

int main() {
    int n, sum, key, counter = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int T[n][n];
    printf("Enter key value:");
    scanf("%d", &key);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter number for :(%d, %d): \n", i, j);
            scanf("%d", &T[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%3d ", T[i][j]);
        printf("\n");
    }
    printf("Coordinates of the center of the square : \n ");

    for(int i =0; i < n;i++){
        for(int j=0; j < n;j++){
            for(int dist=1; dist<=n && i-dist >= 0 && j-dist >=0 && i+dist < n && j+dist < n;dist++){
                sum = 0;
                for(int x=i-dist;x<=i+dist;x++){
                    sum += T[x][j-dist];
                }
                for(int x=i-dist;x<=i+dist;x++){
                    sum += T[x][j+dist];
                }
                for(int y=j-dist+1;y<j+dist;y++){
                    sum += T[i-dist][y];
                }
                for(int y=j-dist+1;y<j+dist;y++){
                    sum += T[i+dist][y];
                }

                if(sum == key){
                    counter++;
                    printf("%d %d\n", i, j);}
            }
        }
    }
    printf("The number of squares with a given sum: %d", counter);
    return 0;
}


// ---------------------------------------------------------------------------------------------------------------------
// // The second method
    
// #include <stdio.h>

// int main() {
//     int n, k;
//     printf("Enter size of the array: ");
//     scanf("%d", &n);
//     printf("Enter key value:");
//     scanf("%d", &k);

//     int T[100][100];        // tablica liczb
//     int L[10000][2];        // tablica znalezionych srodkow
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             printf("Enter number for :(%d, %d): \n", i, j);
//             scanf("%d", &T[i][j]);      // zczytujemy dane
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) printf("%3d ", T[i][j]);
//         printf("\n");
//     }
//     int b,s;        // b - odstep od srodka, s - suma kwadratu
//     int num = 0;        // liczba znalezionych kwadratow
//     for(int i = 1; i < n-  1; i++){
//         for(int j = 1; j < n - 1; j++){
//             b = 1;
//             while(i - b >= 0 && i + b <= n - 1 && j - b >= 0 && j +b  <= n - 1 ){       // warunek na rozmiar kwadratu
//                 s = 0;
//                 for(int p = 1; p < b; p++){
//                     s += T[i+b][j+p]+T[i+b][j-p]+T[i-b][j+p]+T[i-b][j-p]+T[i+p][j+b]+T[i+p][j-b]+T[i-p][j+b]+T[i-p][j-b];
//                 }       // suma komorek kwadratu
//                 s += T[i-b][j]+T[i+b][j]+T[i][j+b]+T[i][j-b]+T[i+b][j+b]+T[i-b][j+b]+T[i+b][j-b]+T[i-b][j-b];
//                 // suma komorek granicznych
//                 if(s == k){     // sprawdzamy sume i wpisujemy do tablicy
//                     L[num][0] = i;
//                     L[num][1] = j;
//                     num += 1;
//                 }
//                 b++;        //zwiekszamy odstep
//             }
//         }
//     }
//     printf("%d\n", num);        // wypisujemy liczbe kwadratwo i wspolrzedne srodkow
//     for(int i = 0; i < num; i++){
//         printf("%d %d\n", L[i][0], L[i][1]);
//     }
// }
