//Escreva um programa que recebda do usuario 3 valores (a, b e c), e que verifica se c é divisível por ambos, apenas um, ou não é divisível.
#include <stdio.h>



int main() {

	int a, b, c;

	printf("Escolha um valor para:\n");
	printf("\nA = ");
	scanf("%d", &a);
	printf("B = ");
	scanf("%d", &b);
	printf("C = ");
	scanf("%d", &c);

	if(a > 0 && b > 0) {
	//Verifica se o valor de 'a' e 'b' é maior que 0, e somente realiza a operação se assim for.
	if(c % a == 0 && c % b == 0) {

		printf("\nC (%d) e divisivel por ambos A (%d) e B (%d)\n", c, a, b);
	}
	//Verifica se a divisão por 'a' e 'b' tem resto 0.
	else if(c % a != 0 && c % b != 0) {

		printf("\n C (%d) nao e divisivel por ambos A (%d) e B (%d)\n", c, a, b);
	}
	//Verifica se a divisão por 'a' e 'b' tem um valor diferente de 0.
	else {

		printf("\nC (%d) e divisivel por apenas 1, seja A (%d) ou B (%d).\n", c, a, b);
	}
	//Caso não seja nenhuma das condições acima, presume que ele seja divisivel por pelo menos 1.
	}
	else {

		printf("Valor invalido");
		return 1;
	}
	//Imprime a mensagem de erro (caso os numeros inseridos forem negativos ou 0), e encerra o programa.
	return 0;
}

