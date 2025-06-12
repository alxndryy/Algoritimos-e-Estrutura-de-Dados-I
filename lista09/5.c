/*Crie uma função recursiva que printe os divisores de um número natural N*/
#include <stdio.h>

int ContaDivisores(int numero, int cont){
	if(cont<=numero){
		if(numero%cont==0){
			printf("%d", cont);
		}
	ContaDivisores(numero, cont+1);
	}
	return cont;
}

int main(void){
	int n=10, i=1;
	ContaDivisores(n, i);

	return 0;
}
