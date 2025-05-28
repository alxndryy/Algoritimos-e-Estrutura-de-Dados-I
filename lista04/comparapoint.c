//Escreva um programa que leia dois elementos, compare seus endereços, e exiba o maior deles.
#include <stdio.h>

int main(void){

	int a, b, *pa=&a, *pb=&b;

	printf("Dê um valor para 'a' e 'b' respectivamente:\n");
	scanf("%d %d", pa, pb);

	(pa>pb) ? printf("Endereço de 'a': %p\n", pa) : printf("Endereço de 'b': %p\n", pb);

	return 0;

}
