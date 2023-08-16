#include <stdio.h>
#include <stdlib.h>

void area (float a, float b);
void perimetro (float a, float b);

int main ()
{
	float a,b;
	
	printf("ingrese alto: ");
	scanf("%f",&a);
	
	printf("ingrese ancho: ");
	scanf("%f",&b);
	
	area(a,b);
	perimetro(a,b);
	return 0 ;
}
void area (float a, float b)
{
	float are;
	are=a*b;
	printf("tu area es de: %.2f\n\n",are);
}

void perimetro (float a, float b)
{
	float peri;
	peri=2*a+2*b;
	
	printf("tu perimetro es de: %.2f",peri);
}
