//Escreva um programa que calcule a amplitude total de uma série de 5 números.
#include <stdio.h>



int main() {

	int n1, n2, n3, n4, n5;
	int maior, menor;

	printf("Digite uma lista de 5 numeros:\n");
	scanf("%d" "%d" "%d" "%d" "%d", &n1, &n2, &n3, &n4, &n5);
	
	maior = n1;
	menor = n1;
	//Determina maior e menor como 'n1', para realizar a comparação.
	if (n2 > n1) {

		maior = n2;
	}
	else if (n2 < n1) {
		
		menor = n1;
	}

	if (n3 > n1) {
	
		maior = n3;
	}
	else if (n3 < n1) {
		
		menor = n3;
	}

	if (n4 > n1) {

		maior = n4;
	}
	else if (n4 < n1) {

		menor = n4;
	}

	if (n5 > n1) {
		
		maior = n5;
	}
	else if (n5 < n1) {
		
		menor = n5;
	}
	//Realiza as comparações.
	printf("\nAmplitude Total = %d\n", maior - menor);
	//Calcula a amplitude total.
	return 0;

}
