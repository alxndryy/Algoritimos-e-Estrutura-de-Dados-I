/*Crie uma estrutura representando um carro. Essa estrutura deve conter o nome do modelo,
nome do fabricante, autonomia (em km) e capacidade do tanque (em L). Agora, escreva um
programa que leia os dados de cinco carros e os armazene nessa estrutura. Em seguida, exiba o
carro com melhor quilometragem por litro. Salve esses dados em um arquivo BINÁRIO. Crie uma
opção para permitir ao usuário visualizar os dados armazenados no arquivo.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 1024

struct veiculo{
	char nome[TAM];
	char fabricante[TAM];
	float autonomia;
	float capaci_tanque;
};

void EscreveDados(void){
	struct veiculo veiculos[5];
	FILE *arq=fopen("veiculos.bin", "wb");
	int cont;
     	char texto[TAM];

	if(arq){
		int posic_melhor=0;
		char texto[TAM];
		for(cont=0;cont<5;cont++){
     			printf("Carro: %d\n\nDigite o nome do modelo:\n", cont+1);
     			scanf(" %[^\n]", veiculos[cont].nome);
			printf("Digite o nome do fabricante:\n");
			scanf(" %[^\n]", veiculos[cont].fabricante);
			printf("Digite a autonomia(Km) e capacidade do tanque(L) respectivamente:\n");
			scanf("%f %f", &veiculos[cont].autonomia, &veiculos[cont].capaci_tanque);
			printf("\n");
			
			if((veiculos[cont].autonomia/veiculos[cont].capaci_tanque)>(veiculos[posic_melhor].autonomia/veiculos[posic_melhor].capaci_tanque)){
				posic_melhor=cont;
			}
		}
		printf("melhor Km/L:\nModelo:%s\nFabricante:%s\nAutonomia:%.2f\nCapacidade max.tanque:%.2f\n", veiculos[posic_melhor].nome, veiculos[posic_melhor].fabricante, veiculos[posic_melhor].autonomia, veiculos[posic_melhor].capaci_tanque);

		fwrite(&veiculos[posic_melhor], sizeof(struct veiculo), 1, arq);
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
		struct veiculo dados;
		printf("\n");
		FILE *arq=fopen("veiculos.bin", "rb");
		while(fread(&dados, sizeof(dados), 1, arq)){
			printf("%s\n%s\n%.2f\n%.2f\n", dados.nome, dados.fabricante, dados.autonomia, dados.capaci_tanque);
		}
		fclose(arq);
	}

	return 0;
}
