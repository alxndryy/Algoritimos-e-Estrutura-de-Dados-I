//implemente um algoritimo que solicita ao usuario um numero inteiro, e imprime seu sucessor.
#include <stdio.h>
//chama a bibliotecla

int main() {
//abre o codigo, e espera que a função retorne um numero inteiro.
	int n;
	//define a variável 'n' como 'int'.

	printf("Digite um numero: ");
	//imprime na tela a mensagem "digite um numero".
	scanf("%d", &n);
	//lê o numero inserido pelo usuario e armazena na variavel 'n'.
	printf("\nO sucessor de %d equivale a: %d.\n", n, n+1);
	//calcula o sucessor (n+1) e imprime na tela.
	return 0;
	//exige que retorne '0', para indicar que a função foi executada com exito.
}
