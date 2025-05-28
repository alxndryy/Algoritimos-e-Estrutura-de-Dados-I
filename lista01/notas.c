//implemente um algoritimo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostre a soma, media e o produto.
#include <stdio.h>



int main() {

	float n1, n2, n3;
	//define as variaveis 'n1', 'n2', 'n3' como 'float'.

	printf("\nInsira as notas:");
	//imprime a mensagem dentro do parenteses.
	printf("\nNota 1: ");
	//"\n" quebra uma linha.
	scanf("%f", &n1);
	//le o numero inserido pelo usuario, e armazena na variavel depois da virgula (com o '&').
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	
	printf("\nSoma = %.2f", n1 + n2 + n3);
	//imprime o resultado da soma ("%.2f" com apenas duas casas decimais.)
	printf("\nMedia = %.2f", (n1 + n2 + n3) / 3);
	//imprime o resultado da media.
	printf("\nProduto = %.2f\n", (n1 * n2 * n3));
	//imprime o resultado do produto.
	
	return 0;
}
	


