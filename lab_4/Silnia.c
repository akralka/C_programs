#include <stdio.h>
#include <stdlib.h>

const char* multiply(char a[], char b[]){
    int c[100] = {0};
    int l,i,j,k,A,B,C;
    for(i = 0; a[i] != '\0';i++){ }
    A = i;
    for(j = 0; b[j] != '\0';j++){ }
    B = j;
    for(i = 0; i <= (A-1)/2; i++){
        k = a[i];
        a[i] = a[A-1-i];
        a[A-1-i] = k;
    }
    for(i = 0; i <= (B-1)/2; i++){
        k = b[i];
        b[i] = b[B-1-i];
        b[B-1-i] = k;
    }
    for(i = 0; i < A; i++){
        for(j = 0; j < B; j++){
            C = ((int)a[i]-48) * ((int)b[j]-48);
            k = i + j;
            c[k] += C;
            C = c[k];
            for(l = 0; c[k+l] >= 10; l++){
                c[k+l] = c[k + l] % 10;
                c[k + l + 1] = C / 10 + c[k + l+1];
                C = c[k+l+1];
            }
        }
    }

    for(i = 99; c[i] == 0; i--){}
    j = i + 1;

    for(i = 0; i <= (j-1)/2; i++){
        k = c[i];
        c[i] = c[j-1-i];
        c[j-1-i] = k;
    }

    char* res = (char*)malloc(j+sizeof(char));

    for(int i = 0; i < j; i++){
        res[i] = (char)(c[i]+48);
    }
    res[j] = '\0';
    return res;
}

const char* str_conv(int a){
    char* res = (char*)malloc(10*sizeof(char));
    int j = 0;
    char k;
    while(a>0){
        res[j] = (char)(a%10+48);
        a = a/10;
        j++;
    }
    for(int i = 0; i <= (j-1)/2; i++){
        k = res[i];
        res[i] = res[j-1-i];
        res[j-1-i] = k;
    }
    res[j] = '\0';
    return res;
}

int main() {
    char str1[] = "1";
    char* result;
    char* prev = str1;
    char* curr;
    int n;
    printf("Enter an integer to compute its factorial:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        curr = str_conv(i);
        result = multiply(prev, curr);
        prev = result;
    }
    puts(result);
    return 0;
}


//#include <stdio.h>
//
//int main() {
//    int n, i;
//    unsigned long long factorial = 1;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//
//    if (n < 0)
//        printf("Factorial of a negative number does not exist.");
//    else if(n==0)
//        printf("0! = 1");
//    else {
//        for (i = 1; i <= n; ++i) {
//            factorial *= i;
//        }
//        printf("%d! = %llu", n, factorial);
//    }
//
//    return 0;
//}
// działa do 65
