/* 3. Implemente um procedimento preencheValores que preencha 2 vetores X e Y, com 10
elementos cada com valores aleatórios entre 10 e 20. Implemente um procedimento que receba
os dois vetores previamente preenchidos e gere um novo vetor Z com os elementos desses 2
vetores intercalados de tal forma que nas posições ímpares do novo vetor estejam os elementos
do primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro.
Faça um procedimento que receba e exiba o conteúdo de um vetor. Implemente um programa
que faça as devidas declarações e acione os módulos para exemplificar o seu uso.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intercala(int x[], int y[], int length, int z[]){
	int cont, contx=0, conty=0;

	for(cont=0;cont<length*2;cont++){
		if(cont % 2 == 1){
			z[cont]=x[contx];
			contx++;
		}else{
			z[cont]=y[conty];
			conty++;
		}
	}
}

void preencheValores(int x[], int y[], int length){
	int cont;
	srand(time(NULL));

	for(cont=0;cont<length;cont++){
		x[cont]=rand()%11+10;
		y[cont]=rand()%11+10;
	}

}

int main(void){
	const int tamanho=10;
	int vet1[tamanho], vet2[tamanho], vet3[tamanho*2];

	preencheValores(vet1, vet2, tamanho);
	intercala(vet1, vet2, tamanho, vet3);

	return 0;
}
