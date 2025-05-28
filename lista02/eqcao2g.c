//Escreva um programa que calcule as raizes de uma equação de segundo grau.
#include <stdio.h>
#include <math.h>


int main() {

	float a, b, c;

	printf("Determine os valores para:\n");
	printf("A = ");
	scanf("%f", &a);
	printf("B = ");
	scanf("%f", &b);
	printf("C = ");
	scanf("%f", &c);
	//armazena os numeros inseridos pleo usuario nas respectivas variaveis.
	printf("\nraiz positiva = %.2f", (-b + (pow(b, 2.0) - (4 * a * c)) * 0.5) / (2 * a));
	printf("raiz negativa = %.2f\n", (-b - (pow(b, 2.0) - (4 * a * c)) * 0.5) / (2 * a));
	//realiza a equação (delta e bhaskara) e imprime o resultado da raiz positiva, e negativa.
	return 0;

}
