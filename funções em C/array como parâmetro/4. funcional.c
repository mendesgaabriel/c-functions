//refer�ncia: https://youtu.be/SAhR1h3LpDY
#include <stdio.h>
#include <stdlib.h>
void imprime_matriz(int m[][2], int n){
	int i, j;
	for(i=0; i<n; i++)
		for(j=0; j<2; j++)
		printf("%d\n", m[i][j]);
	}
	
	int main(){
		/*Arrays com mais de uma dimensao precisam
		da informa��o do tamanho das outras dimens�es. */
		int mat[3][2] = {{1,2}, {3, 4}, {5,6}};
		imprime_matriz(mat, 3);
	}
