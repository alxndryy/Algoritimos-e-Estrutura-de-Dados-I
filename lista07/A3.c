/* Escreva um procedimento que separe os dados do arquivo “iris.csv” em três outros arquivos:
“setosa.csv”, “versicolor.csv” e “virginica.csv”, cada um contendo os dados de uma espécie. O
main deverá ser criado para chamar do procedimento. */
#include <stdio.h>
#include <string.h>

void SeparaEspec(void){
	int contlinhas=0, setosa=0, versicolor=0, virginica=0;
	char texto[1000], *pos;
	FILE *arq=fopen("iris.csv", "r");
	FILE *set=fopen("setosa.csv", "w");
	FILE *ver=fopen("versicolor.csv", "w");
	FILE *vir=fopen("virginica.csv", "w");
	if(arq&&set&&ver&&vir){
     		while(fgets(texto, sizeof(texto), arq)){
			if((pos=strstr(texto, "setosa"))){
				fputs(texto, set);
			}else if((pos=strstr(texto, "versicolor"))){
				fputs(texto, ver);
			}else if((pos=strstr(texto, "virginica"))){
				fputs(texto, vir);
			}
		}
	}else{
		return;
	}
	fclose(arq);
	fclose(set);
	fclose(ver);
	fclose(vir);
}
int main(void){
	SeparaEspec();	
	return 0;
}
