//Implemente um programa onde o usuário informa um valor a ser investido, uma taxa de juros mensal a ser aplicada e o numero de meses, e ao final imprima: O valor total acumulado (capital + juros) e o valor dos juros rendidos.
#include <stdio.h>



int main() {

	float c, j, p, vt;
	//define como 'float' as variaveis 'c' (capital), 'j' (juros), 'p' (periodo), 'vt' (valor total).

	printf("Informe:");
	//imprime na tela a mensagem dentro do parênteses.
	printf("\nCapital (valor inicial): ");
	//"\n" quebra uma linha.
	scanf("%f", &c);
	//lê o numero digitado pelo usuario e armazena na variavel depois da virgula (com o '&').
	printf("Taxa de juros mensais (em decimal): ");
	scanf("%f", &j);
	printf("Periodo (meses): ");
	scanf("%f", &p);
	printf("\n");

	vt = c;

	for(int i = 0; i < p; i++) {
		vt = vt * (1 + j);
	}
	//realiza a potenciação.			
	
	printf("Valor total = %.2f", vt);
	printf("\nJuros acumulados = %.2f\n", vt - c);
	return 0;
}
