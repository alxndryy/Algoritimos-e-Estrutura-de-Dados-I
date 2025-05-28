//implemente um algoritimo que solicita um numero 'n' ao usuario e calcule e mostre seu fatorial.
#include <stdio.h>

int main(void) {

	int n, fatorial=1;

	printf("Dê um valor para 'n': ");
	scanf("%d", &n);
	printf("\nfatorial de %d = %d! = ", n, n);

	while(n>1) {
	//enquanto 'n' for maior que 1, executa:
		printf("%d*", n);
		fatorial*=n;
		n--;
	}

	printf("%d=%d\n", n, fatorial*n);
	//imprime o fatorial.
	return 0;

}
		
