//refer�ncia: https://youtu.be/SAhR1h3LpDY
#include <stdio.h>
#include <stdlib.h>
void imprime (int *n, int m){

/*Na fun��o, continuamos usando colchete e �ndice.*/

int i;
for(i=0; i<m; i++)
	printf("%d\n", n[i]);
	}
	
int main(){
	/*Na chamada da fun��o, usa-se apenas
	o nome do array (sem colchete e �ndice), 
	e sem o operador de "&". */
	int v[5] = {1, 2, 3, 4, 5};
	imprime(v, 5);
}
