//Escreva um programa onde um usuario insere o valor de um produto +  a inicial de um estado, e calcule o preço final (valor + imposto) baseado na alíquota de impostos de cada estado.
#include <stdio.h>



int main() {

	float v;
	char i;

	printf("Insira um valor: ");
	scanf("%f", &v);
	printf("Insira a inicial do estado: ");
	scanf(" %c", &i);

	if (i == 'm' || i == 'M') {

		printf("\nValor + imposto = %.2f\n", v + ((7.0 / 100)) * v);
	}
	else if (i == 's' || i == 'S') {

		printf("\nValor + imposto = %.2f\n", v + ((12.0 / 100)) * v);
	}

	else if (i == 'r' || i == 'R') {

		printf("\nValor + imposto = %.2f\n", v + ((15.0 / 100)) * v);
	}

	else if (i == 'e' || i == 'E') {

		printf("\nValor + imposto = %.2f\n", v + ((8.0 / 100)) * v);
	}

	else {
	
		printf("\nEstado invalido\n");
		return 1;
	}

	return 0;

}
	

