//referência: https://youtu.be/OrF2ydZIELk
#include <stdio.h>
#include <stdlib.h>
// protótipo da função:
int quadrado (int a); //protótipo 1
int quadrado (int); //protótipo 2

int main(){
	/*Onde declarar a função? 
	Se for depois do main(),
	precisamos definir o seu protótipo */
	
}

//função:
int quadrado (int a){
	return a * a;
}
