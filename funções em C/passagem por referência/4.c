//referência: https://youtu.be/E-r4WkkwbVI
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
	/*Parâmetro por referência: toda vez que
	a variável for usada, o operador "*" deverá
	ser usado na frente do nome da variável */
	
}
