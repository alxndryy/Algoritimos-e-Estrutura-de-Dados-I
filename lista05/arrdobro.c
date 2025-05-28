/* 1. Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo. */
#include <stdio.h>

int main(void){
	const int tam=5;
	int x[tam], y[tam], cont;

	for(cont=0;cont<tam;cont++){
     		scanf("%d", &x[cont]);
	}
	for(cont=0;cont<tam;cont++){
     		y[cont]=x[cont]*2;
	}

	return 0;
}
