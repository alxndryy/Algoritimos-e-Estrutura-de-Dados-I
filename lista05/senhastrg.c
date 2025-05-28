/*Peça ao usuário que crie uma senha. Utilize um para armazenar a senha. Valide se a senha
atende aos critérios de segurança, como ter pelo menos 8 caracteres, conter pelo menos uma
letra maiúscula, uma letra minúscula, um número e um caractere especial. Imprima se a senha é
válida ou não.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificador(int tam, char string[tam]){
	int cont, maiusc, minus, num, espec;

	for(cont=0;cont<tam;cont++){
		if(isupper(string[cont])){
			maiusc=1;
		}else if(islower(string[cont])){
			minus=1;
		}else if(isdigit(string[cont])){
			num=1;
		}else if(ispunct(string[cont])){
			espec=1;
		}
	}
	if(maiusc==1&&minus==1&&num==1&&espec==1){
		return 0;
	}

	printf("\nSenha Inválida\n");
	
	return 1;
}

int main(void){
	const int tamanho=15;
	int verif=1;
	char senha[tamanho];
	
	do{
		printf("Digite sua senha:\n");
		fgets(senha, sizeof(senha), stdin);
		senha[strcspn(senha, "\n")]=0;
		if(strlen(senha)>=8){
			verif=verificador(tamanho, senha);
		}else{
			printf("\nSenha Inválida!\n");
		}
	}while(verif!=0);

	printf("\nSenha Válida!\n");

	return 0;
}
