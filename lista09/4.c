/*Construa uma função recursiva que recebe uma string e diz se ela é ou não um palíndromo.*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool VerificaPalindromo(char strg[], int tam, int cont){
	if(tam>0&&cont<tam){
		if(strg[cont]!=strg[tam-1]){
			return false;
		}
	VerificaPalindromo(strg, tam-1, cont+1);
	}
	return true;
}
			

int main(void){
	char string[]="rir";
	int tamanho=strlen(string), i=0;

	VerificaPalindromo(string, tamanho, i);
	return 0;
}
