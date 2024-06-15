#include <stdio.h>

#define N 10//aqui defino o vetor com 10 elementos
int main(){
	int i, aux, flag;// variavel(i) aqui faz a contagem, a (aux) faz a troca de valores quando necessario e a (flag) sinaliza quando a sequencia estiver em ordem.
	int lista[N];// uma especie de vetor que vai armazenar 10 elementos
	
	for(i=0; i<N; i++) {// para (i) comecando em (0) e (i) menor que (9) representado pela definicao (N) some 1 elemento
		printf("\nItem %d: ", i+1);
		scanf("%d", &lista[i]);// nesse scanf se pede que se receba um dado decimal inteiro e subescreva  na variavel i da lista
	}
	flag=1;//aqui sinalizo que o flag e verdadeiro
	while(flag) {// enquanto flag for verdadeiro, repita:
		flag=0;//aqiu o flag entra na estrutura zerado, representa que o sinalizador esta desligado
		for(i=0; i<N-1; i++) {//para i comecando em 0, repita enquanto i for menor ou igual a 8 para cada passo some 1
			if(lista[i]>lista[i+1]) {// se o elemento i da lista for maior que o elemento i+1:
				aux=lista[i];//salva  o elemento i da lista na variavel aux
				lista[i]=lista[i+1];//aqui o valor [i+1] e cololcado no lugar do elemento [i]
				lista[i+1]=aux;//aqui se promove a troca do elemento em [i+1] para o elemento da variavel aux
				flag=1;//entao o flag volta a ser verdadeiro
		}
	}
}
	for(i=0; i<N; i++){
		printf("\nItem %d: %d", i+1, lista[i]);//mostra os itens e os valores
		
	}
	
}
