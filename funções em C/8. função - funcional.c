//refer�ncia: https://youtu.be/al6Uq0nnuUE 
#include <stdio.h>
#include <stdlib.h>

int menu(){
	int i;
	
	do{
		printf("Escolha uma op��o: \n");
		printf("(1) Op��o 1\n");
		printf("(2) Op��o 2\n");
		printf("(3) Op��o 3\n");
		scanf("%d", &i);
	}while (i < 1 || i > 3);
	return i;
}

int main(){
	int op = menu();
	printf("Voc� escolheu a op��o %d\n", op);
}
