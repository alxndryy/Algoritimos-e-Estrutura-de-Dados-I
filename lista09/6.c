/*Crie uma função recursiva que printe os divisores comuns entre dois números naturais N e M*/
#include <stdio.h>

int RetornaMaior(int num1, int num2){
	if(num1>num2){
		return num1;
	}

	return num2;
}

void ImprimeDivisores(int num1, int num2, int cont){
	if(cont<=RetornaMaior(num1, num2)){
		if((num1%cont==0)&&(num2%cont==0)){
			printf("%d", cont);
		}
	VerificaDivisores(num1, num2, cont+1);
	}
}
			

int main(void){
	int N=10, M=20, i=1;

	VerificaDivisores(n, m, i);
	
	return 0;
}
