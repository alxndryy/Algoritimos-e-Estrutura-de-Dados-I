//faça um programa que indique o nome do mes por extenso de acordo com o numero correspondente.
#include <stdio.h>



int main() {

	int mes;

	printf("insira um numero correspondente a um mes: ");
	scanf("%d", &mes);
	printf("\n");

	if(mes < 12 && mes > 1) {
		
		switch(mes) {
		
			case 1: printf("%d corresponde a: Janeiro\n", mes);
			break;
			case 2: printf("%d corresponde a: Fevereiro\n", mes);
			break;
			case 3: printf("%d corresponde a: Marco\n", mes);
			break;
			case 4: printf("%d corresponde a: Maio\n", mes);
			break;
			case 5: printf("%d corresponde a: Abril\n", mes);
			break;
			case 6: printf("%d corresponde a: Junho\n", mes);
			break;
			case 7: printf("%d corresponde a: Julho\n", mes);
			break;
			case 8: printf("%d corresponde a: Agosto\n", mes);
			break;
			case 9: printf("%d corresponde a: Setembro\n", mes);
			break;
			case 10: printf("%d corresponde a: Outubro\n", mes);
			break;
			case 11: printf("%d corresponde a: Novembro\n", mes);
			break;
			case 12: printf("%d corresponde a: Dezembro\n", mes);
			break;
		}
	}
	else {

		printf("Erro, numero maior que 12 ou menor que 1");
		return 1;
	}

	return 0;

}
		

		

	
