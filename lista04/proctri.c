//Escreva um procedimento que receba por parametro tres valores reais x, y, e z e que verifique se esses valores podem ser comprimentos de um triangulo, e neste caso, exibe o tipo de triangulo a ser formado.
#include <stdio.h>

void verificatriangulo(float x, float y, float z){

	if(x+y>z&&x+z>y&&z+y>x){
		if(x==y&&y==z){
			printf("\nTriangulo Equilatero.\n");
		}else if(x!=y&&y!=z&&x!=z){
			printf("\nTriangulo Escaleno.\n");
		}else{
			printf("\nTriangulo Isoceles.\n");
		}
	}
	else{
		printf("\nNão podem formar um triangulo!\n");
	}
}
/* Descrição: o procedimento tem por objetivo, verificar se os valores podem ser comprimentos de um triangulo, e caso sim, exibem o tipo de triangulo a ser formado.
Entrada: Lados (float).
Saida: Procedimento
*/
int main(void){

	int cont, n;
	float lx, ly, lz;

	printf("Quantos triangulos vão ser analisados:\n");
	scanf("%d", &n);

	for(cont=1;cont<=n;cont++){
		printf("\nTriangulo: %d\n", cont);
		printf("Informe os lados x, y, z do triangulo:\n");
		scanf("%f %f %f", &lx, &ly, &lz);
		
		verificatriangulo(lx, ly, lz);

	}

	return 0;
}
