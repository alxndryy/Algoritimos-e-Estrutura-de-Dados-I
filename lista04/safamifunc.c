//Escreva um procedimento que receba a quantidade de membros (pais + filhos) e um salario de 'n' familias (até que salário seja = 0), e calcule a media salarialtotal, faça um main que acione esse procedimento.
#include <stdio.h>

void calcsal(void){
	int membros=0, mbros, cont=1;
	float salario=0, sal;
	do{
		printf("\nFamilia: %d\n", cont);
		printf("Insira uma quantidade de membros (pais+filhos):\n");
		scanf("%d", &mbros);
		printf("\nInsira um salario:\n");
		scanf("%f", &sal);
		membros+=mbros;
		salario+=sal;
		cont++;

	}while(sal!=0);
	printf("\nMedia Salarial Total = %.2f\n", salario/membros);
}
/*Descrição: O procedimento tem por objetivo, receber e calcular a media salarial total de um numero 'n' de familias ,até que o salario inserido seja 0).
Entrada: membros (int), salario (float).
Saida: Procedimento.
*/
int main(void){

	calcsal();
	return 0;

}
		
