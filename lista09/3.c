/*Construa uma função recursiva que receba uma string e printe a string reversa:
Ex.: recebe “ola mundo” e printa “odnum alo”*/
#include <stdio.h>
#include <string.h>

char* ImprimeEspelhado(char strg[], int tam){
	if(tam>0){
		printf("%c", strg[tam-1]);
		ImprimeEspelhado(strg, tam-1);
	}
	return strg;
}
		

int main(void){
	char string[]="ola mundo";
	int tamanho=strlen(string);

	ImprimeEspelhado(string, tamanho);
	return 0;
}

