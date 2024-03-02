//referência: https://youtu.be/E-r4WkkwbVI
#include <stdio.h>
#include <stdlib.h>
void soma_mais_um(int *n){
	*n = *n + 1;
	printf("Dentro da função: x %d\n", *n);
}

int main(){
	/*Parâmetro por referência: na chamada da função
	é necessário utilizar o operador "&"
	na frente do nome da variável que será
	passada por referência*/
	int x = 5;
	
	printf("Antes da função: x = %d\n", x);
	soma_mais_um(&x); //semelhante ao scanf, para leitura da função por referência
	printf("Depois da função: x = %d\n", x);
}
