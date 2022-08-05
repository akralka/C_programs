#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int to_arabic(char roman[12]);
char* to_roman(int num);

int main() {
    char roman1[12], roman2[12];
    int arabic1, arabic2;
    printf("Enter a Roman numeral:");
    scanf("%s",roman1);
    printf("Enter a Roman numeral:");
    scanf("%s",roman2);
    arabic1 = to_arabic(roman1);
    arabic2 = to_arabic(roman2);
    printf("The sum of %s and %s is %s", roman1, roman2, to_roman(arabic1 + arabic2));
    return 0;
}


char* to_roman(int num){
    char* roman = (char*) calloc(12, sizeof(char));
    int i = 0;
    while(num) {

        if(num >= 1000)
        {
            roman[i] = 'M'; i++;
            num = num - 1000;
        }
        else if(num >= 900) {
            roman[i] = 'C'; i++;
            roman[i] = 'M'; i++;
            num = num - 900;
        }
        else if(num >= 500)
        {
            roman[i] = 'D'; i++;
            num = num - 500;
        }
        else if(num >= 400) {
            roman[i] = 'C'; i++;
            roman[i] = 'D'; i++;
            num = num - 400;
        }
        else if(num >= 100)
        {
            roman[i] = 'C'; i++;
            num = num - 100;
        }
        else if(num >= 90) {
            roman[i] = 'X'; i++;
            roman[i] = 'C'; i++;
            num = num - 90;
        }
        else if(num >= 50)
        {
            roman[i] = 'L'; i++;
            num = num - 50;
        }
        else if(num >= 40) {
            roman[i] = 'X'; i++;
            roman[i] = 'L'; i++;
            num = num - 40;
        }
        else if(num >= 10)
        {
            roman[i] = 'X'; i++;
            num = num - 10;
        }
        else if(num >= 9) {
            roman[i] = 'I'; i++;
            roman[i] = 'X'; i++;
            num = num - 9;
        }
        else if(num >= 5)
        {
            roman[i] = 'V'; i++;
            num = num - 5;
        }
        else if (num >= 4) {
            roman[i] = 'I'; i++;
            roman[i] = 'V'; i++;
            num = num - 4;
        }
        else if(num >= 1)
        {
            roman[i] = 'I'; i++;
            num = num - 1;
        }
    }
    printf("\n");
    return roman;
}

int to_arabic(char roman[12]) {
    int arabic=0;
    int length,i,d[30];

    length=strlen(roman);

    for(i=0;i<length;i++) {
        switch(roman[i]) {
            case 'm':
            case 'M': d[i]=1000; break;
            case 'd':
            case 'D': d[i]= 500; break;
            case 'c':
            case 'C': d[i]= 100; break;
            case 'l':
            case 'L': d[i]= 50; break;
            case 'x':
            case 'X': d[i]= 10; break;;
            case 'v':
            case 'V': d[i]= 5; break;
            case 'i':
            case 'I': d[i]= 1;
        }
    }
    for(i=0;i<length;i++){
        if(i==length-1 || d[i]>=d[i+1])
            arabic += d[i];
        else
            arabic -= d[i];
    }
    return arabic;
}






