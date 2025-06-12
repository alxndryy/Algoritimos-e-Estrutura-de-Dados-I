#include <stdio.h>

void VerificaPar(int num){
	(num%2==0)?printf("par\n"):printf("impar\n");
}

int main(void){
	int num;

	scanf("%d", &num);
	VerificaPar(num);

	return 0;
}
