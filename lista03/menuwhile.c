/* Escreva um programa que apresente o menu de opções a seguir e permita ao usuário escolher a
opção desejada. Leia os dados necessários para executar a operação e mostre o resultado. Esse
processo deverá ser repetido até que o usuário escolha a opção 4. */
#include <stdio.h>

int main(void) {

	int num, mes;
	float sal, nsal;

	printf("Insira um salario: ");
	scanf("%f", &sal);

	if(sal > 0){

		do{
			printf("\nEscolha uma opção:\n1.Novo Salário, 2.Férias, 3.Décimo Terceiro, 4.Sair: ");
			scanf("%d", &num);
		
			switch(num){
				case 1:
					if(sal < 1000.00){
						nsal = sal + (sal * 0.15);
					}
					else if(sal > 2000.00){
						nsal = sal + (sal * 0.05);
					}else{
						nsal = sal + (sal * 0.10);
					}
					printf("\nNovo Salário = %.2f\n", nsal);
					break;
				case 2:
					printf("\nFérias = %.2f\n", sal + (sal / 3));
					break;
				case 3:
					printf("\nInsira os meses de trabalho: ");
					scanf("%d", &mes);
					if(mes <= 12){
						printf("Décimo Terceiro = %.2f\n", (sal * mes) / 12);
					}else{
						printf("\nNumero maior que 12!\n");
					}
					break;
				case 4:
					printf("\nSaindo...\n");
					break;
				default:
					printf("\nOpção Inválida!\n");
					break;
			}
		}while(num > 0 && num != 4);
	}else{
		printf("\nSalário Negativo!\n");
	}

	printf("Programa Encerrado!\n");
	
	return 0;

}
