//Escreva um procedimento que receba três valores inteiros, e para cada valor mostre o nome de sua variavel, seu endereço e seu valor.
#include <stdio.h>

void exibir(int *ptra, int *ptrb, int *ptrc){

	printf("\nNome: 'a', Valor: %d, Endereço: %p\nNome: 'b', Valor: %d, Endereço %p\nNome: 'c', Valor: %d, Endereço: %p\n", *ptra, ptra, *ptrb, ptrb, *ptrc, ptrc);

}

int main(void){

	int a, b, c;

	printf("Dê um valor para 'a' 'b' e 'c' respectivamente:\n");
	scanf("%d %d %d", &a, &b, &c);
	exibir(&a, &b, &c);
	
	return 0;

}
