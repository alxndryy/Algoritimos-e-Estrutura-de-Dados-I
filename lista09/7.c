/*Crie uma versão recursiva para o algoritmo que trata o problema do cálculo da potenciação
*/
#include <stdio.h>

int RealizaPotencia(int base, int expoente){
	if(expoente==0){
		return 1;
	}
	return base*RealizaPotencia(base, expoente-1);
}

int main(void){
	int n=5, m=2;
	RealizaPotencia(n, m);

	return 0;
}
