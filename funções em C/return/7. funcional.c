//referência: https://youtu.be/E3zGQKc0BX4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime_log (float x){
	if (x <= 0)
		return; //termina a função
	printf("Log = %f\n", log(x));
}

int main(){
	/*O comando return pode ser usado 
	sem uma expressão para terminar uma função
	do tipo void.*/
	
	float f;
	printf("Digite f: ");
	scanf("%f", &f);
	imprime_log(f);
}
