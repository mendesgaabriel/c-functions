//refer�ncia: https://youtu.be/E3zGQKc0BX4
#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y){
	return x + y;
}

int main(){
	/*Fun��es que n�o sejam do tipo void
	devem sempre retornar um valor para cham�-la,
	basta atribuir a camada da fun��o (nome e par�metros)
	a uma vari�vel.*/
	
	int x = soma(4, 5);
	printf("x = %d\n", x);
	printf("soma = %d\n", soma(2,3));
}
