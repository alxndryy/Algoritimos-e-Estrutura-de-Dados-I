/* Escreva um programa que contabilize a quantidade de amostras por espécie no arquivo.
Dica: Pesquise a função strtok, da biblioteca string.h. O usuário deve digitar o nome do arquivo.
Deve existir um procedimento que recebe o nome do arquivo já digitado e processa os dados. */
#include <stdio.h>
#include <string.h>

void ContaEspec(char *nome){
	int setosa=0, versicolor=0, virginica=0;
	char texto[1000];
	FILE *arq=fopen(nome, "r");
	if(arq){
		while(fgets(texto, sizeof(texto), arq)){
			if(strstr(texto, "setosa")){
				setosa++;
			}else if(strstr(texto, "versicolor")){
				versicolor++;
			}else if(strstr(texto, "virginica")){
				virginica++;
			}
		}
	printf("setosa=%d\nversicolor=%d\nvirginica=%d\n", setosa, versicolor, virginica);
	}else{
		return;
	}
	fclose(arq);
}
			
		

int main(void){
	const int tamanho=256;
	char nome[tamanho];

	printf("Digite o nome/endereço do seu arquivo:\n");
	scanf("%[^\n]", nome);
	getchar();
	ContaEspec(nome);

	return 0;
}
