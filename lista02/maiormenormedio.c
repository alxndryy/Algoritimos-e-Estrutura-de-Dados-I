//Crie um algoritimo que leia 3 numeros reais e mostre o maior, o menor, e indique o elemento do meio:
#include <stdio.h>

int main() {

	float x, y, z;
	float maior, menor, medio;

	printf("Insira 3 numeros:\n");
	scanf("%f" "%f" "%f", &x, &y, &z);

	maior = x;
	menor = x;
	//Determina, inicialmente, 'x' como maior e menor para realizar a comparação.	
	if (y > x) {
		maior = y;
	}
	else if (y < x) {
		menor = y;
	}

	if (z > x) {
		maior = z;
	}
	else if (z < x) {
		menor = x;
	}
	//Realiza a comparação com ambos 'y' e 'z' (com base no 'x') para determinar qual é o maior e menor.
	medio = x + y + z - maior - menor;
	//Realiza a operação, para determinar o medio.
	printf("\nMaior = %.2f", maior);
	printf("\nMenor = %.2f", menor);
	printf("\nMedio = %.2f\n", medio);

	return 0;

}
		
	
