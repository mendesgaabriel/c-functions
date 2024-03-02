//referência: https://youtu.be/E-r4WkkwbVI
#include <stdio.h>
#include <stdlib.h>
void somaValor(int n){
	n = n + 1;
}

void somaReferencia(int *n){
	*n = *n + 1;
}

int main(){
	int x = 5;
	somaValor(x);
	printf("Depois da função somaValor: x = %d\n", x);
	
	int y = 5;
	somaReferencia(&y);
	printf("Depois da função somaReferencia: y = %d\n", y);
	
}
