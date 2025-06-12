#include <stdio.h>
#include <locale.h>

void Verifica(int numero){
	if(numero%5==0&&numero%3!=0){
		printf("Divisível por 5\n");
	}else if(numero%5!=0&&numero%3==0){
		printf("Divisível por 3\n");
	}else if(numero%5==0&&numero%3==0){
		printf("Divisível por ambos\n");
	}else{
	printf("Não é divisível por 3 nem por 5\n");
	}
}

int main(void){
	int num1, num2, num3;
	setlocale(LC_ALL, "");

	scanf("%d %d %d", &num1, &num2, &num3);
	Verifica(num1);
	Verifica(num2);
	Verifica(num3);
	
	return 0;
}
