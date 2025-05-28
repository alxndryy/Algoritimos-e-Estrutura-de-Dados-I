//Implemente um programa que leia a quantidade de eleitores de um municipio, votos nulos, brancos e validos,e imprima seus percentuais.
#include <stdio.h>


int main() {

	int e, n, b, v;
	//define as variaveis: 'e'(eleitores), 'n'(nulos), 'b'(brancos), 'v'(validos) como 'int'.
	float pn, pb, pv;
	//define as variaveis 'pn'(percentual nulos), 'pb'(percentual brancos), 'pv'(percentual validos) como 'float' (para obter maior precisão ao imprimir os percentuais.)
	
	printf("\nInsira a quantidade de eleitores: ");
	//imprime na tela a mensagem dentro do parenteses.
	scanf("%d", &e);
	//lê o numero inserido pelo usuario, e armazena na variavel depois da virgula (com o '&').
	printf("\nAgora, insira os votos:");
	//"\n" quebra uma linha.
	printf("\nNulos: ");
	scanf("%d", &n);
	printf("Brancos: ");
	scanf("%d", &b);
	printf("Validos: ");
	scanf("%d", &v);

	if(n + b + v > e) {

	printf("\nErro: numero de votos maior que de eleitores.\n");
	return 1;
	//encerra o programa.

	}//Imprime na tela uma mensagem de "erro" caso o numero de votos seja maior que o numero de eleitores.
	else {

	pn = ((float)n * 100) / e;
	//transforma em float, multiplica por 100, e divide por 'e'.
	pb = ((float)b * 100) / e;
	pv = ((float)v * 100) / e;
	//coloca as variaveis inteiras em 'float' para permitir que a operação seja realizada com exito.
	printf("\nPercentual de votos:");
	printf("\nNulos = %.2f%%", pn);
	//"%.2f%%" imprime as variaveis float com apenas duas casas decimais, e com o sinal '%'.
	printf("\nBrancos = %.2f%%", pb);
	printf("\nValidos = %.2f%%\n", pv);

	}

	return 0;

}
	
	
	
	
