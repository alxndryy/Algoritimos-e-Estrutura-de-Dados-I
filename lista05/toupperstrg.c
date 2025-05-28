/* Implemente a função abaixo, que receba como parâmetro uma string e converte,
individualmente, cada caractere para maiúsculo. A função deverá retornar a string convertida
para maiúsculo. A string a ser retornada deverá ser criada utilizando o comando malloc. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *paramaiusc(int tam, char *txt){
	int cont;
	char *strg=(char*)malloc(tam*sizeof(char));

	if(strg!=NULL){	
		for(cont=0;txt[cont]!='\0';cont++){
			strg[cont]=toupper(txt[cont]);
		}
	}else{
		exit(1);
	}

	return strg;
}

void limpa_buffer(void){
	int c;
	while((c=getchar())!='\n'&&c!=EOF);
}
//Limpa o buffer.


int main(void){
	const int tamanho=20;
	char texto[tamanho];

	printf("Insira seu texto:\n");
	scanf(" %[^\n]", &texto);
	//fflush(stdin);
	limpa_buffer();
	char *maiusculo=paramaiusc(tamanho, texto);
	printf("\n%s\n", maiusculo);

	free(maiusculo);
	return 0;
}

