//Escreva um procedimento que receba do main 3 valores inteiros, e os organize em ordem crescente.
#include <stdio.h>

void organizar(int numero1, int numero2, int numero3){
	if(numero1 < numero2 && numero2 < numero3){
		printf("\n%d, %d, %d\n", numero1, numero2, numero3);

	}else if(numero2 < numero1 && numero1 < numero3){
		printf("\n%d %d %d\n", numero2, numero1, numero3);

	}else if(numero2 < numero3 && numero3 < numero1){
		printf("\n%d %d %d\n", numero2, numero3, numero1);

	}else if(numero3 < numero2 && numero2 < numero1){
		printf("\n%d %d %d\n", numero3, numero2, numero1);

	}else if(numero3 < numero1 && numero1 < numero2){
		printf("\n%d %d %d\n", numero3, numero1, numero2);

	}else if(numero1 < numero3 && numero3 < numero2){
		printf("\n%d %d %d\n", numero1, numero3, numero2);

	}
}
/* Descrição: O procedimento tem por objetivo organizar 3 numeros inteiros em ordem crescente.
Entrada: numeros(int)
Saida: Procedimento.
*/
int main(void){
	int n1, n2, n3;
	
	printf("Insira 3 numeros:\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	organizar(n1, n2, n3);
	return 0;

}
