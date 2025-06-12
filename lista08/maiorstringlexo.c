/*Escreva um programa em C que leia um número N de strings, conforme determinado pelo usuário. O programa deve então imprimir a maior string em termos de comprimento (tamanho) e a maior string em termos lexicográficos (ordem alfabética).

Exemplo:
Entrada

3
banana
maçã
uva
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
const int tamanho=512;

void PreencheStrings(int n, char strings[n][tamanho]){
	int i;

	for(i=0;i<n;i++){
		scanf(" %[^\n]", strings[i]);
	}
}

int ComparaMaior(int n, char strings[n][tamanho]){
	int i;
	int maior=0;

	for(i=1;i<n;i++){
		if(strlen(strings[i])>strlen(strings[maior])){
     			maior=i;
     		}
	}
	return maior;
}

int ComparaLexografica(int n, char strings[n][tamanho]){
	int i;
	int maior=0;

	for(i=1;i<n;i++){
     		if(strings[i][0]>strings[i+1][maior]){
     			maior=i;
     		}
	}
     	return maior;
}

int main(void){
	int n;
	scanf("%d", &n);
	char strings[n][tamanho];
	getchar();

	PreencheStrings(n, strings);
	printf("%s\n", strings[ComparaMaior(n, strings)]);
	printf("%s\n", strings[ComparaLexografica(n, strings)]);

	return 0;
}
