/* Crie uma função que recebe um vetor de caracter por parâmetro que representa um endereço
de e-mail para validar se o e-mail é válido. A função deverá retornar a posição do símbolo ‘@’. Se
o símbolo não estiver presente, então a função deverá retornar –1.
Implemente um main que peça ao usuário que insira um endereço de e-mail e depois chame a
função passando esse e-mail por parâmetro. Imprima se o endereço de e-mail é válido ou não. */
#include <stdio.h>
#include <string.h>

int pos(int tam, char strg[tam]){
	int cont;

	for(cont=0;cont<tam;cont++){
		if(strg[cont]=='@'){
			return cont;
		}
	}
	
	return -1;
}

int main(void){
	const int tamanho=100;
	char email[tamanho];

	do{
		printf("Digite seu email:\n");
		fgets(email, sizeof(email), stdin);
		email[strcspn(email, "\n")]=0;	
		printf("\nPosição do '@'=%d\n", pos(tamanho, email));
	}while(pos(tamanho, email)==-1);

	return 0;
}
	
