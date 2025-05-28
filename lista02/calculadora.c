//Escreva um programa que mostra ao usuário um menu com quatro oções de operações matematicas (soma, subtração, multiplicação, divisão, modulo).
#include <stdio.h>



int main() {

	int opr;
	float x, y;

	printf("Escolha entre: Soma (1), Subtracao (2), Multiplicacao (3), Divisao (4), Modulo (5):\n");
	//apresenta as opções pro usuário
	scanf("%d", &opr);
	printf("\nInsira o primeiro numero: ");
	scanf("%f", &x);
	printf("Insira o segundo numero: ");
	scanf("%f", &y);
	
	if(opr == 1) {
		
		printf("\nsoma = %.2f\n", x + y);
	}
	//realiza a soma.
	else if(opr == 2) {
		
		printf("\nsubtracao = %.2f\n", x - y);
	}
	//realiza a subtração.
	else if(opr == 3) {

		printf("\nmultiplicacao = %.2f\n", x * y);
	}
	//realiza a multiplicação.
	else if(opr == 4) {

		printf("\ndivisao = %.2f\n", x / y);
	}
	//realiza a divisão.
	else if(opr == 5) {

		if(x > 0 && y > 0) {

			printf("\nmodulo = %.2f e %.2f\n", x, y);
		}
		else {
			
			printf("\nmodulo = %.2f e %.2f\n", (x < 0 ? -x : x), (y < 0 ? -y : y));
		}
	}
	//imrpime o modulo.
	else {
		
		printf("\nOperacao invalida: numero escolhido maior que 5 ou menor que 1\n");
		return 1;
	}
	//imprime uma mensagem de erro, caso o usuário insira um numero maior que 5 ou menor que 1.

	return 0;

}
