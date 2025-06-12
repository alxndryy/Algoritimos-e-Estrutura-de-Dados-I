/*Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5*/
#include <stdio.h>

int Conta(int cont){
	if(cont<5){
		cont++;
		printf("%d", cont);
		Conta(cont);
	}
	return cont;
}

int main(void){
	int i=0;
	Conta(i);
	
	return 0;
}
	

