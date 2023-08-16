#include <stdio.h>
#include <stdlib.h>

void calcular (float r1, float r2, float r3, float r4, float r5);
int main() {
	float	 r1,r2,r3,r4,r5;

	printf("ingrese r1: ");
	scanf("%f",& r1);
	
	printf("ingrese r2: ");
	scanf("%f",& r2);
	
	printf("ingrese r3: ");
	scanf("%f",& r3);
	
	printf("ingrese r4: ");
	scanf("%f",& r4);
	
	printf("ingrese r5: ");
	scanf("%f",& r5);
	
	calcular (r1,r2,r3,r4,r5);
	return 0;
}

void calcular (float r1, float r2, float r3, float r4, float r5)
{
	float rt;
	rt=r1+r2+r3+r4+r5;
	
	printf("r1: %.2f\n",r1);
	
	printf("r2: %.2f\n",r2);
	
	printf("r3: %.2f\n",r3);
	
	printf("r4: %.2f\n",r4);
	
	printf("r5: %.2f\n",r5);
	
	printf("rt: %.2f\n",rt);
}
