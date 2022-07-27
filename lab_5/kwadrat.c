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
    printf("%d", counter);
    return 0;
}
