//referência: https://youtu.be/E3zGQKc0BX4
#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y){
	return x + y;
}

int main(){
	/*Funções que não sejam do tipo void
	devem sempre retornar um valor para chamá-la,
	basta atribuir a camada da função (nome e parâmetros)
	a uma variável.*/
	
	int x = soma(4, 5);
	printf("x = %d\n", x);
	printf("soma = %d\n", soma(2,3));
}
