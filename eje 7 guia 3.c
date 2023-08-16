#include <stdio.h>
#include <stdlib.h>

void mayor (float num1, float num2);
int main() {
	float num1,num2;
	
	printf("ingrese numero 1: ");
	scanf("%f",& num1);
	
	printf("ingrese numero 2: ");
	scanf("%f",& num2);

	mayor(num1,num2);
	return 0;
}

void mayor (float num1, float num2)
{
	if (num1==num2)
	{
		printf("tu numeros son iguales");
	}
	else
	{
		if (num1>num2)
		{
			printf("tu numeros mayor es %.2f", num1);
		}
		else
		{
			printf("tu numeros mayor es %.2f", num2);
		}
	}
}
