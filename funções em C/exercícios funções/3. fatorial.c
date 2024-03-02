#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
	int f = 1;
	int i;
		for(i=1; i<=n; i++)
		f = f * i;
	return f;
}
int main(){
	int x, y;
	printf("Digite valor n:");
	scanf("%d", &x);
	
	y = fatorial(x);
	
	printf("O fatorial de n, é: %d", y);
}
