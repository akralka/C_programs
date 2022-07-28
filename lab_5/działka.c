#include <stdio.h>

int main() {
    int n;
    printf("Enter size of the field :\n ");
    scanf("%d", &n);
    short T[100][100];
    printf("Enter array: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &T[i][j]);
        }

    }
    int a = 0;      // odstep pionowo
    int b = 0;      // odstep poziomo
    int f, s;       // f - flaga ,   s - pole powierzchni
    int max = 0;        // maksymalne pole powierzchni
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(T[i][j] == 1){
                continue;
            }
            a = -1;     
            b = 0;
            while(i + a < n-1){
                a++;
                b = 0;
                f = 1;
                int p;      // idziemy po wierszach w nowych kolumnach
                while(f == 1 && j + b <= n-1){
                    for(p = 0; p <= a; p++){
                        if(T[i+p][j+b] == 1){
                            f = 0;      // nieuzytkowy, wracamy
                            b -= 1;
                            break;
                        }
                    }
                    if(j+b == n-1){
                        f = 0;      
                    }
                    if(f == 1 && j + b < n-1){
                        b++;        // nastepna kolumna do sprawdzenia
                    }
                }
                s = (a+1)*(b+1);        //liczymy pole
                if(s > max){
                    max = s;
                }
            }
        }
    }
    printf("%d", max);
}
