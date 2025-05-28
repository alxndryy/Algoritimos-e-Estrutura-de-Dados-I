//Escreva uma função que calcule e retorne a soma do quociente '1' um pelos fatorias dos numeros até 'n'. (de acordo com a formula do enunciado).
#include <stdio.h>

float equacao(int n){
	int cont, fatorial=1;
	float e=0;

	for(cont=1;cont<=n;cont++){
		fatorial*=cont;
		e+=1.0/fatorial;
	}

	return e+1;
}
/* Descrição: A função tem por objetico calcular a soma do quociente de '1' pelos fatoriais dos numeros até 'n'.
Entrada: n (int)
Saida(Retorno): e+1 (conforme a formula no enunciado).
*/
int main(void){
	int num;

	printf("Dê um valor a 'n':\n");
	scanf("%d", &num);
	printf("\nValor de 'E' = %.2f\n", equacao(num));

	return 0;

}
