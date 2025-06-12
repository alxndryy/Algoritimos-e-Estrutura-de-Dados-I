#include <stdio.h>

float CalculaValor(int copias){
	if(copias>100){
		return copias*0.20;
	}
	return copias*0.25;
}

int main(void){
	int qtd_copias;
	float val;

	scanf("%d", &qtd_copias);
	if(qtd_copias>=0){
		val=CalculaValor(qtd_copias);
		printf("%.2f\n", val);
	}
	
	return 0;
}
