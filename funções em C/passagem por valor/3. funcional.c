//refer�ncia: https://youtu.be/4Astcs8IW3s
#include <stdio.h>
#include <stdlib.h>

void soma_mais_um (int n){ //n = x
	n = n + 1;
	printf("Dentro da fun��o: x = %d\n", n);
}

int main(){
	//Exemplo de passagem "Por Valor"
	int x = 5;
	
	printf("Antes da fun��o: x %d\n", x);
	soma_mais_um(x);
	printf("Depois da fun��o: x = %d\n", x);
}
