//referência: https://youtu.be/al6Uq0nnuUE
#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
	int i, f = 1;
	for(i = 1; i<=n; i++)
		f = f * i ;
		return f;
			
}

int main(){
	//reutilizando a função fatorial:
	int y = fatorial(10);
	printf("10! = %d\n", y);
	printf("5! = %d\n", fatorial(5));
}
