/* Implemente um procedimento preencheNotas que receba e preencha um vetor com as notas
de uma turma de 10 alunos. Faça um procedimento calculaMedia que receba um vetor
preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima
da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa
(main) que declare e preencha as devidas o vetor com valores digitados e acione os
procedimentos. */
#include <stdio.h>

void calculaMedia(int tam, int vetor[tam]){
	int cont, contal=0, soma=0;

	for(cont=0;cont<tam;cont++){
		soma+=vetor[cont];
	}
	for(cont=0;cont<tam;cont++){
		if(vetor[cont]>soma/10.0)
			contal++;
	}

	printf("\nSomatoria = %d\nMedia = %.2f\nNotas acima da media = %d\n", soma, soma/10.0, contal);
}
/* Procedimento; calculaMedia:
* soma e calcula uma media dos numeros armazenados em int vetor.
*/
void preencheNotas(int tam, int vetor[tam]){
	int cont;

	for(cont=0;cont<tam;cont++){
		printf("Aluno: %d\n", cont+1);

		printf("Insira a nota: ");
		scanf("%d", &vetor[cont]);
		printf("\n");
	}

	calculaMedia(tam, vetor);
}
/* Procedimento; preencheNotas:
* preenche o vetor "int vetor" com numeros inseridos pelo usuário.
*/	
int main(void){
	const int tamanho=10;
	int vet[tamanho];

	preencheNotas(tamanho, vet);

	return 0;
}
