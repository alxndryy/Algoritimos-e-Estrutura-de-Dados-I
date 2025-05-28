/* implemente um procedimento chamado primo que recebe como parâmetro um inteiro m,
passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve
armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor
número primo maior do que m. */
#include <stdio.h>

void primo(int m, int *p1, int *p2){
	int i, j, k, l;
	for(i=2;i<m;i++){
		for(j=2;j<=i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			*p1=i;
		}
	}
	for(k=2;k<m+1;k++){
		for(l=2;l<=k;l++){
			if(k%l==0){
				break;
			}
		}
		if(k==l){
			*p2=k;
		}
	}
	printf("\nMaior primo(menor que %d): %d\nMenor primo(maior que %d): %d\n", m, *p1, m, *p2);
}
/* Descrição: o procedimento verifica se o numero é primo, caso seja, armazena nos endereços respectivos.
Entrada: m (int), ponteiros (int).
Saida: Procedimento.
*/
int main(void){

	int num, pmaior, pmenor;
	
	printf("Dê um valor a 'm':\n");
	scanf("%d", &num);
	primo(num, &pmaior, &pmenor);

	return 0;
}	
