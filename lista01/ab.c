//implemente um programa que leia dois numeros reais e os armazene em duas variaveis diferentes ('a' e 'b').Em seguida, troque os valores das variaveis de forma que 'a' tenha o valor de 'b' e vice e versa. Ao final imprima os valores finais das variáveis.
#include <stdio.h>

int main() {

	int a, b, c;
	//define as variaveis 'a', 'b', 'c' como 'int'.
	printf("\nInsira um valor para 'a': ");
	//imprime na tela a mensagem dentro do parenteses.
	scanf("%d", &a);
	//lê o numero digitado pelo usuario e armazena na variavel depois da virgula (com o '&').
	printf("Insira um valor para 'b': ");
	scanf("%d", &b);
	printf("\nValores inseridos:");
	//"\n" quebra uma linha.
	printf("\n'a': %d", a);
	printf("\n'b': %d", b);
	
	c = a;//atribui o valor da variavel 'c' a variavel 'a'.
	a = 0 + b;//zera o valor de 'a', e acrescenta o valor de 'b'.
	b = 0 + c;//zera o valor de 'b', e acrescenta o valor de 'c' (que agora vale o mesmo tanto que 'a' anteriormente.
	
	printf("\nValores finais (invertidos):");
	printf("\n'a' = %d", a);
	printf("\n'b' + %d\n", b);

	return 0;

}
	
	
