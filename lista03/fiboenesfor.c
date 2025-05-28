//implemente um algoritimo que solicita um numero inteiro 'n' e mostre o enesimo termo da sequência de fibonacci.
#include <stdio.h>

int main(void) {

	int a=0, b=1, r, n;

	printf("Insira um numero inteiro:\n");
	scanf("%d", &n);

	if(n < 2) {
		r = n;
	}else{
		for(int i=2; i<=n; i++) {
			r = a + b;
			a = b;
			b = r;
		}
	}

	printf("enesimo termo %d da sequência de fibonacci: %d\n", n, r);
	return 0;
}
