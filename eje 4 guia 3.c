#include <stdio.h>
#include <stdlib.h>
void precion(float f, float a);
int main() {
	float f,a;
	printf("ingrese fuerza: ");
	scanf("%f",&f);
	printf("ingrese area: ");
	scanf("%f",&a);
	
	precion(f,a);
	return 0;
}

void precion(float f, float a)
{
	float p;
	p=f/a;
	
	printf(" tu precion es de %.2f",p);
}
