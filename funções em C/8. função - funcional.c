//referência: https://youtu.be/al6Uq0nnuUE 
#include <stdio.h>
#include <stdlib.h>

int menu(){
	int i;
	
	do{
		printf("Escolha uma opção: \n");
		printf("(1) Opção 1\n");
		printf("(2) Opção 2\n");
		printf("(3) Opção 3\n");
		scanf("%d", &i);
	}while (i < 1 || i > 3);
	return i;
}

int main(){
	int op = menu();
	printf("Você escolheu a opção %d\n", op);
}
