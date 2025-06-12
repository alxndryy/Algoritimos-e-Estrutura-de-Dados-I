#include <stdio.h>

int CalculaSoma(int notas[], int tamanho){
	int soma=0, i;
	for(i=0;i<tamanho;i++){
		soma+=notas[i];
	}
	printf("%d\n", soma);
	return soma;
}

void CalculaMedia(int soma){
	printf("%d\n", soma/5);
}

int main(void){
	const int tamanho=5;
	int notas[tamanho], i;

	for(i=0;i<tamanho;i++){
		scanf("%d", &notas[i]);
	}
	CalculaMedia(CalculaSoma(notas, tamanho));

	return 0;
}
