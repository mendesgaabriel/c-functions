//referência: https://youtu.be/5BBD_IfFUtk
#include <stdio.h>
#include <stdlib.h>

float leitura(); //sem parâmetros, ele IGNORA qualquer parâmetro colocado futuramente.
int le_arquivo (void); //void, só pode ser chamado futuramente com le_arquivo(); - sem parâmetro.
// caso haja algum parâmetro sendo passado futuramente, ele RECUSA.

int main(){
	float y;
	y = leitura(); //certo.
	y = leitura(5); //certo, porém parâmetro ignorado.
	y = leitura (5, 'a'); //certo, porém parâmetro ignroado.
	
	int x;
	x = le_arquivo(); //certo.
	x = le_arquivo(5); //ERRO
	
}
