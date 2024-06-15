#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void criar(int vet[]){
	for(int i=0; i<5; i ++){
		printf("\nDigite o [%d]° elemento: ",i+1);
		scanf("%d",&vet[i]);
	}
}
void imprimir(int vet[]){
	for(int i=0; i<5; i++){
		printf("%d\t", vet[i]);
	}
}
void quadrado(int vet[]){
	printf("\nImprimindo o quadrado do vetor: ");
	for(int i=0; i<5; i++){
		printf("%d\t", vet[i] * vet[i]);
	}
	
}
void imppriult(int vet[]){
	printf("\nImprimindo o primeiro e o ultimo elemento: ");
	printf("\n");
	printf("%d\t %d\t", vet[0], vet[4]);
}

int main(){
	int vet[5];
	int op=1;
	while (op!=0){
		printf("\n!- Preencher o vetor: ");
		printf("\n2- Imprimir o vetor: ");
		printf("\n3- Imprimir o quadrado do vetor: ");
		printf("\n4- Imprimir o primeiro e o ultimo elemento: ");
		printf("\n0- Sair do programa: ");
		scanf("%d",&op);
	
	if (op == 0)
		break;
	if (op == 1)
		criar(vet);
	if (op == 2)
		imprimir (vet);
	if (op == 3)
		quadrado (vet);
	if (op == 4)
		imppriult (vet);
	}
	system ("pause");
	system ("cls");
	
}

