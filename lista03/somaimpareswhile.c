//implemente um algoritimo que recebe um numero inteiro 'n' fornecido pelo usuário e mostre a soma dos numeros impares de 0 até 'n'(inclua 'n'se 'n' for impar).
#include<stdio.h>

int main(void) {

	int n, cont=0, soma=0;

	printf("Dê um valor para 'n':\n");
	scanf("%d", &n);

	while(cont<n) {
	//enquanto "cont" for menor que 'n' executa:	
		cont++;
		if(cont % 2!=0) {
			soma+=cont;
	//acrescenta a terceira variavel "soma" o valor de cont, a cada loop.
		}
	}
	
	printf("\nsoma = %d\n", soma);
	return 0;
}
