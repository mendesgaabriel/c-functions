//referência: https://youtu.be/al6Uq0nnuUE
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, f = 1;
	
	printf("Digite n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		f = f * i;
	}
	printf("fatorial de n: %d\n", f);
}
