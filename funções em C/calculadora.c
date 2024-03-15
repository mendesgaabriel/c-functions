#include <stdlib.h>
#include <stdio.h>

float multi(float a, float b){
	return a * b;
}

float divisao(float a, float b){
	return a / b;
}

float soma(float a, float b){
	return a + b;
}

float sub(float a, float b){
	return a - b;
}

int main(){
	
	float n1, n2;
	
	int i;
	
	printf("Digite um valor: ");
	scanf("%f", &n1);
	
	printf("Digite outro valor: ");
	scanf("%f", &n2);
	
	printf("A multiplicação deles é: %.2f\n", multi(n1, n2));
	printf("A divisão deles é: %.2f\n", divisao(n1, n2));
	printf("A soma deles é: %.2f\n", soma(n1, n2));
	printf("A diferença deles é: %.2f\n", sub(n1, n2));
}
