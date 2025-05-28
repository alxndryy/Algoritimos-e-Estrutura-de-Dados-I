//desenvolva um algoritimo que imprima os 'n' primeiros elementos da série de Fibonacci
#include <stdio.h>

int main(void) {

	int n, a=0, b=1, r;

	printf("Insira um valor para 'n':\n");
	scanf("%d", &n);

	printf("%d %d ", a, b);
	for(int i=2; i<n; i++) {
		r = a + b;
		printf("%d ", r);
		a = b;
		b = r;
	}

	printf("\n");

	return 0;

}
