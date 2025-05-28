//Escreva um procedimento que receba 3 notas de um numero n de alunos, e uma letra, caso a letra seja 'A' imprima na tela a media aritimetica, caso seja 'P', a media ponderada. Faça um main que solicite as 3 notas + uma letra, e acione o procedimento.
#include <stdio.h>
#include <ctype.h>

void calcnotas(char letra, float nota1, float nota2, float nota3){
	if(letra == 'A'){
		printf("\nMedia Aritimetica = %.2f\n", (nota1 + nota2 + nota3) / 3);
	}else{
		printf("\nMedia Ponderada = %.2f\n", (nota1*5+nota2*3+nota3*2) / 10);
	}
}
/* Descrição: O procedimento tem por objetivo calcular a media aritimetica ou ponderada baseado no que recebe por entrada.
Entrada: letra (char), notas(float).
Saida: Procedimento.
*/
int main(void){

	int n, cont;
	float n1, n2, n3;
	char ltr;

	printf("Insira a quantidade de alunos:\n");
	scanf("%d", &n);

	for(cont=1;cont<=n;cont++){
     		printf("\nAluno: %d\n", cont);
		printf("Insira as 3 notas:\n");
		scanf("%f %f %f", &n1, &n2, &n3);
		printf("\nEscolha Entre: Media Aritimetica (A) ou Ponderada (P):\n");
		scanf(" %c", &ltr);
		ltr = toupper(ltr);
		calcnotas(ltr, n1, n2, n3);
	}

	return 0;

}

