//refer�ncia: https://youtu.be/E3zGQKc0BX4
#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){
	if (x > y)
		return x;
	else
		return y;
		printf("Fim da fun��o.\n");
}

int main(){
	/*Quando se chega a um comando return,
	a fun��o � encerrada imediatamente.*/
	int a, b = maior(a, b);
	printf("Digite A & B (separado por espa�os): ");
	scanf("%d %d", &a, &b);
	printf("Maior = %d\n", maior(a, b));
}
