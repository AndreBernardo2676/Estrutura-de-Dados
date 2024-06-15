#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define TAM 10 // Definindo uma constante

typedef struct{  //Define uma struct
	int vet[TAM];
	int topo;  // Toda pilha precisa de variaveis,
	           // Neste caso um vetor contendo a constante nesse caso TAM e
			   // Outra de nome topo nesta struct 
}pilhavet;

void empilha(int valor, pilhavet *p){ // Essa é uma funcao sem retorno com o valor da função e chamando o ponteiro da struct pilavet
	if(p->topo == TAM -1){
		printf("\nPILHA CHEIA");
		scanf(0);
	}
	p->topo++;
	p->vet[p->topo]=valor;	
}

int desempilha(pilhavet *p){//Funcao inteira desempilhar chamando p ponteiro da struct pilhavet
	int aux;// Variavel auxiliar dessa funcao
	if(p->topo <0){
		printf("\nPILHA VAZIA");
	}
	aux = p->vet[p->topo];
	p->topo--;
	return aux;	
}

int main(void){
	pilhavet pilha;//Na memoria a pilhavet ira se chamar pilha
	int valor;
	pilha.topo =-1;//O ponto representa o ponteiro da pilha
	for(int i=0; i<TAM; i++){
		printf("\nDIGITE O VALOR A SER EMPILHADO: ");
		scanf("%d", &valor);
		empilha(valor,&pilha);
	}
	for(int i=0; i<TAM; i++){
		printf("\n%d", desempilha,(&pilha));
	}
	printf("\n");
	system("pause");
}

