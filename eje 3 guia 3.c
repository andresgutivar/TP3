#include <stdio.h>
#include <stdlib.h>

void porcentaje (int total, int hombres, int mujeres);
int main() {
	int total, hombres, mujeres;
	
	printf("ingrese total de curriculums enviados: ");
	scanf("%d", & total);
	
	printf("ingrese total de hombres con curriculums enviados: ");
	scanf("%d", & hombres);
	
	mujeres=total-hombres;
	
	porcentaje(total,hombres,mujeres);
	return 0;
}	

void porcentaje (int total, int hombres, int mujeres)
{
	float porh,porm;
	
	porh=(hombres*100)/total;
	porm=(mujeres*100)/total;
	
	printf("tu porcentaje de mujeres es: %.2f\n",porm);
	printf("tu porcentaje de hombres es: %.2f",porh);
}


