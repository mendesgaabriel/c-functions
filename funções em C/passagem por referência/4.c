//refer�ncia: https://youtu.be/E-r4WkkwbVI
#include <stdio.h>
#include <stdlib.h>
void somaValor(int n){
	n = n + 1;
	printf("%d", n);
}
void somaReferencia(int *n){
	*n = *n + 1;
	printf("%u", *n);
}

int main(){
	/*Par�metro por refer�ncia: toda vez que
	a vari�vel for usada, o operador "*" dever�
	ser usado na frente do nome da vari�vel */
	
}
