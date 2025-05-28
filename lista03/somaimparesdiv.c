//implemente um algoritimo que recebe do usuário um número inteiro 'n' e mostra a soma de todos os números positivos menores ou iguais a 'n', que sejam divisiveis por 3 ou por 5, mas não por ambos.
#include <stdio.h>

int main(void) {

	int n, soma=0, cont=1;

	printf("Dê um valor para 'n':\n");
	scanf("%d", &n);
	printf("\nsoma: ");

	while(cont<=n) {
		if(cont % 3 == 0 && cont % 5 != 0 || cont % 5 == 0 && cont % 3 != 0) {
		//verifica se 'cont' é divisível por 3 mas não por 5 ou se é divisível por 5 mas não por 3, e logo depois:
			printf("+%d", cont);
			soma+=cont;
		//imprime 'cont'(com o caractere '+' antes)e acrescenta 'soma' no valor de 'cont'.
		}
	cont++;
	//acrescenta 'cont' em 1, antes de executar o loop novamente.
	}
	printf("=%d\n", soma);
	return 0;

}
