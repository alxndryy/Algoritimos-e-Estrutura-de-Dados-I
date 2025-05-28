//calcule e indique quantas operações de multiplicação são realizadas em função de 'n':
#include <stdio.h>

int main(void){

	int i=1, n=10; //vamos supor que 'n' seja 10, para calcular mais facilmente.
	int cont=0, cont2=0; //adiocionando dois contadores, é possível conferir o resultado final
	int a = 1;
	while(i<n){
		a = a*2;
		i = i*2;
		cont+=2;
	}
	//a multiplicação de i cresce exponencialmente("i = i * 2" = "i *= 2")ou seja, temos Log2(n), entretanto cada loop realiza duas operações, logo, temos 2*Log2(n) ou 2Log2(n).
	int c = 1;
	for(i=0; i<n; i++){
		for(int j=0;j<n;j++){
			c = c*3;
			cont2++;
		}
	}
	//duplo 'for', sempre resulta em n^2(pois, o loop for dentro de outro, sugere n * n, ou seja, n^2)e existe apenas uma operação dentro do segundo loop, sendo assim n^2 * 1, ou seja, n^2
	//logo, a quantidade de operações em função de 'n', resulta em: "2Log2(n) + n^2".
	printf("\nPara n = 10: %d + %d\n", cont, cont2);
	
	return 0;
}
