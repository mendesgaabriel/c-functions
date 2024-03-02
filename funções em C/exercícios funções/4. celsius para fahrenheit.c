#include <stdio.h>
#include <stdlib.h>

float temp(float celsius){
	return (celsius * 9/5) + 32;
}

int main(){
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = temp(celsius);
	
	printf("A temperatura em Fahrenheit é: %.2f", fahrenheit);
}
