#include <stdio.h>
#include <stdlib.h>
int impar(int num){
	if(num % 2)
	printf("Numero impar.");
	else
	printf("Não é um número impar.");
}

int main(){
	int valor;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	impar(valor);
}
