//escreva um programa que receba 2 pontos cartesianos e imprima a distância entre eles.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//inclui a biblioteca 'math.h'.

int main() {

	float x1, x2, y1, y2, d;
	//define as variaveis 'x1, x2', 'y1, y2' e 'd' (distancia) como 'float'.
	
	printf("Insira:\nDois valores para 'x': ");
	scanf("%f %f", &x1, &x2);
	printf("Dois valores para 'y': ");
	scanf("%f %f", &y1, &y2);
	
	d = pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0);
	//calcula e soma as potencias.
	printf("\nDistancia equivale a = %.2f\n", pow(d, 0.50));

	return 0;

}
