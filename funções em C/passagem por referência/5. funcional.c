//refer�ncia: https://youtu.be/E-r4WkkwbVI
#include <stdio.h>
#include <stdlib.h>
void soma_mais_um(int *n){
	*n = *n + 1;
	printf("Dentro da fun��o: x %d\n", *n);
}

int main(){
	/*Par�metro por refer�ncia: na chamada da fun��o
	� necess�rio utilizar o operador "&"
	na frente do nome da vari�vel que ser�
	passada por refer�ncia*/
	int x = 5;
	
	printf("Antes da fun��o: x = %d\n", x);
	soma_mais_um(&x); //semelhante ao scanf, para leitura da fun��o por refer�ncia
	printf("Depois da fun��o: x = %d\n", x);
}
