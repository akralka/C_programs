#include <stdio.h>

int n, m;
int red_array[1000];

int main() {
    printf("Enter number of points in space:");
    scanf("%d", &n);
    printf("Enter number of red edges:");
    scanf("%d", &m);
    printf("Enter red edges:");
    for(int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        red_array[x]++; ++red_array[y];
    }

    long long one_colour = n * (n - 1) * (n - 2) / 6;
    long long diff_colour = 0;

    for(int i = 1; i <= n; i++) {
        diff_colour= diff_colour + red_array[i] * (n - red_array[i] - 1);
    }

    one_colour = one_colour - diff_colour / 2;

    printf("%lld\n", one_colour);

}
