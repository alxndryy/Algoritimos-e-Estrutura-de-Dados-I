//Escreva um programa que calcule os 'n' primeiros multiplos de 'k' e calcule sua média.
#include <stdio.h>

int main(void){

	int n, k, soma=0, multiplo=0, i=1;

	printf("Insira um valor para 'n' e 'k':\n");
	scanf("%d %d", &n, &k);

	if(n > 0 && k > 0){

		printf("%d ", i);
		for(; i<n; i++){
			multiplo = i * k;
			printf("%d ", multiplo);
			soma+=multiplo;
		}
		printf("\nMedia = %.2f\n", ((float)soma+1)/n);
	}else{
		printf("\nNumeros Negativos!\n");

	return 0;

}
