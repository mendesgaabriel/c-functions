//referÍncia: https://youtu.be/OrF2ydZIELk
#include <stdio.h>
#include <stdlib.h>
int quadrado (int a){
	return a * a;
}

int main(){
	int x, y;
	printf("Digite x: ");
	scanf("%d", &x);
	
	y = quadrado(x);
	
	printf("y = %d\n", y);
}
