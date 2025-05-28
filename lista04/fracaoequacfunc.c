//Escreva uma função que receba como parametro um valor 'n' inteiro positivo, calcule e retorne o valor de 'S'.
#include <stdio.h>

float equacao(int n){
	int cont;
	float s=0;
	
	for(cont=1;cont<=n;cont++){
		s+=(float)(cont*cont+1)/(cont+3);
	}

	return s;

}
/* Descrição: a função tem por objetivo calcular e retornar o valor de 's' de acordo com a equação apresentada no enunciado.
Entrada: n (int).
Saida(retorno): s (float)
*/
int main(void){
	int num;

	printf("Dê um valor para 'n':\n");
	scanf("%d", &num);

	if(num>0){
		printf("\nValor de 's': %.2f\n", equacao(num));
	}else{
		printf("\n'n' precisa ser positivo!\n");
	}

	return 0;

}
