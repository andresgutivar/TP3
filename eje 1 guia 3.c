#include <stdio.h>
#include <stdlib.h>
void mostrar (float a, float b)
{
	printf ("%f\n\n%f",a,b);
}
int main() {
	float a,b;
	
	printf("ingrese el valor del primer numero:\n");
	scanf("%f",& a);
	//a=1
	printf("ingrese el valor del segundo numero:\n");
	scanf("%f",& b);
	//b=2
	mostrar(a,b); //en la funcion principal, si o si tengo que llamar a la funcion que quiero mostrar
	return 0;
}

