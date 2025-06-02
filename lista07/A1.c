/* Escreva um programa que contabilize e mostre a quantidade de linhas existentes no arquivo.
O usuário deve digitar o nome do arquivo. Deve existir um procedimento que recebe o nome do
arquivo já digitado e processa os dados. */
#include <stdio.h>

void ContaLinha(char *nome){
	int cont=0, caractere;
	FILE *arq=fopen(nome, "r");
	if(arq){
		while((caractere=fgetc(arq))!=EOF){
			if(caractere=='\n'){
				cont++;
				printf("%d Espaços\n", cont);
			}
		}
	}else{
		return;
	}
	fclose(arq);
}

int main(void){
	const int tamanho=100;
	char nome[tamanho];

	printf("Coloque o nome/endereço do seu arquivo:\n");
	scanf("%[^\n]", nome);
	ContaLinha(nome);

	return 0;
}	
