/*
 Construa uma versão da função anterior de forma que o limite superior seja parametrizado.
*/
#include <stdio.h>

int Conta(int cont, int limite){
	if(cont<limite){
		cont++;
		printf("%d", cont);
		Conta(cont, limite);
	}
	return cont;
}

int main(void){
	int i=0, n=5;
	Conta(i, n);
	
	return 0;
}
