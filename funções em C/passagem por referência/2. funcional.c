//referência: https://youtu.be/E-r4WkkwbVI
#include <stdio.h>
#include <stdio.h>
int main(){
	/*Exemplo de passagem "Por Referência:
	função scanf()*/
	
	int x = 5;
	printf("Antes do scanf: x = %d\n", x);
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Depois do scanf: x = %d\n", x);
}
