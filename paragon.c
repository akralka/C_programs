#include <stdio.h>
#include <stdlib.h>

int main(void)	{
	int x, p;
    float a, brutto, add;
	printf("Enter netto price: ");
	scanf( "%f", &a);
	printf("Enter quantity: ");
	scanf( "%d", &x);
	printf("Enter VAT: ");
	scanf( "%d", &p);
    add = a * x;
    brutto = add*(1+ 0.01*p);
    printf("Total netto price: product x%d\t",x);
    printf("%f\n", add);
    printf("Total brutto price: product x%d\t",x);
    printf("%f\n", brutto);
    printf("VAT value: %f\n", brutto - add);
	return 0;
}
