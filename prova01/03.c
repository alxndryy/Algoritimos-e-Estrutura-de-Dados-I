/* Escreva um programa que simule operações bancárias em uma conta. Seu
programa deve oferecer um menu com as seguintes opções: 1. Saldo; 2. Compra no crédito;
3. Depósito; 4. Saque; 5. Sair. Ao iniciar o programa, a conta deve ter saldo zero e o saldo
nunca poderá ser negativo. Portanto, caso o valor de uma operação seja inválido, seu
programa deve exibir uma mensagem de erro e retornar ao menu. Para realizar saques e
compras no crédito, deve-se pagar taxas. Saques possuem taxa fixa de R$3,70, mas
compras no crédito possuem taxa variável conforme as seguintes condições:
• Compras menores que R$200,00 possuem taxa de R$3,60.
• Compras de R$200,00 até R$1200,00 possuem taxa de 0,7%.
• Compras superiores a R$1200,00 possuem taxa de 1,3%.
Observação: Para calcular um percentual A de um valor B, faça B*A/100
Rejeite valores de entrada inválidos */
#include <stdio.h>

int main(void){

	int opc;
	float sal=0, val, salanterior=0;

	do{
		printf("Escolha entre:\n1. Conferir Saldo, 2. Compra no Credito, 3. Depósito, 4. Saque, 5. Sair: ");
		scanf("%d", &opc);
		if(opc > 1 && opc < 5){
			salanterior = sal;
			printf("Insira um Valor: ");
			scanf("%f", &val);
			switch(opc){
				case 2:
					if(val < 200){
						sal = sal - (val + 3.60);
					}
					else if(val > 1200){
						sal = sal - (val + (val/100) * 1.3);
					}else{
						sal = sal - (val + (val/100) * 0.7);
					}
					break;
				case 3:
					sal = val + sal;
					break;
				case 4:
					sal = sal - (val + 3.70);
					break;
				default:
					printf("\nNumero Inválido!\n\n");
					break;
			}

			if(sal < 0 || val < 0){
				printf("\nOperação Negada!\n\n");
				sal = salanterior;
			}else{
				printf("\nOperação bem sucedida!\n\n");
			}

		}else{
			switch(opc){
				case 1:
					printf("\nSaldo = %.2f\n\n", sal);
					break;
				case 5:
					printf("\nSaindo...\n");
					break;
				default:
					printf("\nNumero Inválido!\n\n");
					break;
			}
		}
	}while(opc != 5);

	return 0;
}
				
