/*Crie um procedimento que faça uma cópia do arquivo “iris.csv” em um arquivo BINÁRIO
denominado “iris.bin”. O main deverá ser criado para chamar do procedimento.*/
#include <stdio.h>
#include <string.h>

void CopiaBin(void){
	char texto[1000];
	FILE *arq=fopen("iris.csv", "r"), *arqbin=fopen("iris.bin", "wb");

	if(arq&&arqbin){
		while(fgets(texto, sizeof(texto), arq)){
			fwrite(&texto, sizeof(texto), 1, arqbin);
		}
		fclose(arq);
		fclose(arqbin);
	}
}

int main(void){
	CopiaBin();

	return 0;
}
