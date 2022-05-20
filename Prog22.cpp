/*Autor: Ricardo Jafet Granados Chable, Realizado: 23/02/2022
    programa numero 22 en C: Promedio de notas.
	*/
	
#include<stdio.h>

int main(){
	float prom,nota;
	int n,i;
	printf("-------------------");
	printf("\nMedia de notas");
	printf("\nPorfavor introduzca la cantidad de notas deseada: ");
	scanf("%d",&n);
	printf("\n-------------------");
	
	for(i=1; i<=n; i++) {
		printf("\nNota %d: ",i);
		scanf("%f",&nota);
		prom=nota+nota/n;
	}
	printf("La media de las notas es: %.2f",prom);
	
	return 0;
}
