#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

typedef struct{
	int id;
	int idade;
	float renda;
	char nome [40];
	
}cadastro;


int main(void) {
	
	cadastro clientes[5];
	
	printf("\n--------CADASTRO DE ALUNOS--------");
	
	
	for(int i=0; i<5; i++){
		
		printf("\nDigite seu %d id: ", i+1);
		scanf("%d", &clientes[i].id);
		getchar();
		printf("\nDigite o nome do %d aluno: ", i+1);
		gets(clientes[i].nome);
		printf("\nDigite sua %.2f renda: ", i+1);
		scanf("%d", &clientes[i].renda);
		printf("\nDigite sua %d idade: ", i+1);
		scanf("%d", &clientes[i].idade);
		}
		
		printf("\nAluno maior de idade:\n");
	
	for (int i=0; i<5; i++){
		if(clientes[i].idade >= 18){
			printf("ID: %d, Nome: %s, Renda: %.2f, Idade: %d\n",
                   clientes[i].id, clientes[i].nome, clientes[i].renda, clientes[i].idade);
		}
			
		}
	
	
	system("pause");
	//return 0;
}
