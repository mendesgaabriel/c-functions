//refer�ncia: https://youtu.be/5BBD_IfFUtk
#include <stdio.h>
#include <stdlib.h>

float leitura(); //sem par�metros, ele IGNORA qualquer par�metro colocado futuramente.
int le_arquivo (void); //void, s� pode ser chamado futuramente com le_arquivo(); - sem par�metro.
// caso haja algum par�metro sendo passado futuramente, ele RECUSA.

int main(){
	float y;
	y = leitura(); //certo.
	y = leitura(5); //certo, por�m par�metro ignorado.
	y = leitura (5, 'a'); //certo, por�m par�metro ignroado.
	
	int x;
	x = le_arquivo(); //certo.
	x = le_arquivo(5); //ERRO
	
}
