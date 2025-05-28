#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int opc, qtd, cota;
	float sal;

	printf("Insira seu saldo:\n");
	scanf("%f", &sal);
	do{
		printf("Escolha uma das opções:\n1.FAB (cota = 200) 2.FAE (cota=300) 3.FTB (cota=50) 4.FTA (cota=100): ");
		scanf("%d", &opc);
	
		printf("Quantas vezes, quer investir:\n");
		scanf("%d", &qtd);
		switch(opc) {
			case 1: 
				cota = 200;
				break;
			case 2:
				cota = 300;
				break;
			case 3:
				cota = 50;
				break;
			case 4:
				cota = 100;
				break;
			default:
				printf("Opção Inválida!\n");
		}
		sal = sal - (qtd * cota);
		if(sal < 0) {
			printf("Saldo Insuficiente!\n");
		}else{
			printf("Sucesso!\n");
		}
	}while(sal > 0);
	
	return 0;

}
