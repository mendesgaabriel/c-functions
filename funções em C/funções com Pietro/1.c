#include <stdio.h>

float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}

int main(){
	float n1, n2, m;
	
	printf("Digite um valor: ");
	scanf("%f", &n1);
	
	printf("Digite um segundo valor:");
	scanf("%f", &n2);
	m = maior(n1, n2);
	
	printf("O maior numero digitado foi: %.2f", m);
}
