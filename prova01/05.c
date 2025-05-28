/* Escreva um programa para imprimir um padrão de asteriscos (*) na forma de
um triângulo retângulo INVERTIDO. O programa deve receber um número inteiro n como
entrada e imprimir n linhas de asteriscos, sendo que a primeira linha possui n asterisco, a
segunda linha possui n-1, e assim por diante até 1. Exemplo: n = 5 */
#include <stdio.h>

int main(void){

	int n, i, j;

	printf("Dê um valor para 'n':\n");
	scanf("%d", &n);

	for(i=n; i>0; i--){
		for(j=0; j<i; j++){
			printf("*");
		}
	
		printf("\n");
	}

	return 0;

}
