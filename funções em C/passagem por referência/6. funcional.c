//refer�ncia: https://youtu.be/E-r4WkkwbVI
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
	printf("Depois da fun��o somaValor: x = %d\n", x);
	
	int y = 5;
	somaReferencia(&y);
	printf("Depois da fun��o somaReferencia: y = %d\n", y);
	
}
