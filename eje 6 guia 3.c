#include <stdio.h>
#include <stdlib.h>

void calcular(float num);
int main() {
	float num;
	
	printf("ingrese numero: ");
	scanf("%f",& num);
	
	calcular(num);
	return 0;
}

void calcular(float num)
{
	float r;
	r=num/8;
	
	printf("la octava parte de tu numero es: %.2f",r);
}
