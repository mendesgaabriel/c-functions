//refer�ncia: https://youtu.be/E-r4WkkwbVI
#include <stdio.h>
#include <stdio.h>
int main(){
	/*Exemplo de passagem "Por Refer�ncia:
	fun��o scanf()*/
	
	int x = 5;
	printf("Antes do scanf: x = %d\n", x);
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Depois do scanf: x = %d\n", x);
}
