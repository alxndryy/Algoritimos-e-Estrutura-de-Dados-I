//Apresente o que será exibido após a execução do codigo a seguir:
#include<stdio.h>

int main() {
	int a = 3, b = 5, c = 7;

	a = (b > c) ? b++ : ++c;
	//Pergunta se 'b' é maior que 'c', caso verdadeiro, atribui o valor de 'b' a 'a' e depois o incrementa em +1, caso falso, incrementa 'c' em +1 e depois atribui o valor a 'a'.
	//a = 8
	//c = 8
	b = a++ + --c;
	//'b' agora vale 'a' + "c-1".('a' incrementa em +1, no final)
	//b = 15
	//a = 9
	//c = 7
	c = (b % 2 == 0) ? ++a : b--;
	//Pergunta se 'b' é divisivel por 2, caso verdadeiro, incrementa 'a' em +1 e atribui o valor a 'c', caso falso, atribui o valor de 'b' a 'c' e o decrementa em 1.
	//c = 15
	//b = 14
	printf("a = %d, b = %d, c = %d", a, b, c);

	//saida: "a = 9, b = 14, c = 15".
	return 0;

}
