//Implemente um algoritimo com as linhas a seguir e apresente no codigo fonte uma explicação detalhada, com suas palavras, do que acontece em cada uma das linhas.
#include <stdio.h>
#include <stdlib.h>


int main() {

	int a,b,c,d=1;
	//define as variaveis 'a', 'b', 'c', 'd' como inteiras e atribui o valor de '1' a 'b'.
	a = -2;
	//atribui o valor de -2 a variavel 'a'.
	b = a * a;
	//atribui o valor de 'a * a' (-4) a variavel 'b'.
	c = d++;
	//atribui o valor de 'b' (1) a variavel 'c' e incrementa 'b' em 1 unidade
	d = c++ + 5;
	//atribui o valor de 'c' (1) a 'd', incrementa 'c' em uma unidade e adiciona '5'.
	d = ++c + 5;
	//atribui o valor de 'c' incrimentado em 1 unidade (3) a variavel 'd' e adiciona '5' (8).
	
	printf("%d %d %d %d", a, b, c, d);
	//imprime o valor de todas as variaveis como 'inteiro'.
	

	return 0;

}
	
