#include <stdio.h>
#include <stdlib.h>
int impar(int num){
	if(num % 2)
	printf("Numero impar.");
	else
	printf("N�o � um n�mero impar.");
}

int main(){
	int valor;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	impar(valor);
}
