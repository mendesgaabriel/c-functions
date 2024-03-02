#include <stdio.h>
#include <stdlib.h>
float media(float a, float b, float c){
	float res;
	res = (a + b + c) / 3;
	printf("A media dos valores é: %f", res);
}

int main(){
	float v1, v2, v3;
	printf("Digite um valor:");
	scanf("%f", &v1);
	
	printf("Digite um segundo valor: ");
	scanf("%f", &v2);
	
	printf("Digite um terceiro valor: ");
	scanf("%f", &v3);
	
	media(v1, v2, v3);
}

