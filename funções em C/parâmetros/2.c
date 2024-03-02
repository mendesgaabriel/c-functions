//referência: https://youtu.be/5BBD_IfFUtk
#include <stdio.h>
#include <stdlib.h>
float raiz (float r);
int soma (int x, int y);

int main(){
	float k, w = 5.4;
	
	k = raiz (w);
	k = raiz (5.4);
	k = raiz(); //ERRO
	k = raiz (w, 5.4); //ERRO
	
	int x, y = 1, z =2;
	
	x = soma (y, z);
	x = soma (1, 2);
	x = soma (y, 2);
}
