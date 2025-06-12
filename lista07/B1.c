/*B1. Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia os dados de seis pessoas. Calcule e salve em um arquivo
TEXTO os nomes da pessoa mais nova e da mais velha. Criar uma opção que permite ao usuário
visualizar os dados armazenados no arquivo.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 1024

struct pessoa{
	char nome[TAM];
	int dia;
	int mes;
	int ano;
};

void EscreveDados(void){
	struct pessoa pessoas[6];
	FILE *arq=fopen("Pessoas.txt", "w");
	int cont;
     	char texto[TAM];

	if(arq){
		int posic_novo=0, posic_velho=0;
		for(cont=0;cont<6;cont++){
     			printf("Pessoa: %d\n\nDigite o nome:\n", cont+1);
     			scanf(" %[^\n]", &pessoas[cont].nome);
			printf("Digite o dia, mês, e ano de nascimento, respectivamente:\n");
			scanf("%d %d %d", &pessoas[cont].dia, &pessoas[cont].mes, &pessoas[cont].ano);
			printf("\n");
			
			if(pessoas[cont].ano>pessoas[posic_novo].ano){
				posic_novo=cont;
			}
			if(pessoas[cont].ano<pessoas[posic_velho].ano){
				posic_velho=cont;
			}
			
		}
		fprintf(arq, "Nome do +Velho:%s\nNome do +Novo:%s\n", pessoas[posic_velho].nome, pessoas[posic_novo].nome);
		fclose(arq);
	}
}

int main(void){
	char opc;
	EscreveDados();

	printf("Deseja ver dados salvos?(S/n)\n");
	scanf(" %c", &opc);
	opc=toupper(opc);

	if(opc=='S'){
		printf("\n");
		FILE *arq=fopen("Pessoas.txt", "r");
		char texto[TAM];
		while(fgets(texto, sizeof(texto), arq)){
			printf("%s", texto);
		}
		fclose(arq);
	}

	return 0;
}
