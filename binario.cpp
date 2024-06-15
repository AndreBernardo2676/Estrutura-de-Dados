#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



void binario(int num){
	if(num == 0)
		printf("%d", num);
	else
		binario(num / 2);
		printf("%d", num % 2);	
}

int main(){
	int num;
	
	printf("\nDigite um numero decimal: ");
	scanf("%d", &num);
	
binario(num);
    

	printf("  Seu valor em binario. ");
	scanf("%d", &binario);

return(0);

}

