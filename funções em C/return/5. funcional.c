//refer�ncia: https://youtu.be/E3zGQKc0BX4

int maior(int x, int y){
	if (x > y)
		return x;
	else 
		return y;
		
}

int main(){
	/*Uma fun��o pode ter mais de um comando return.*/
	
	int x = maior(4, 5);
	printf("Maior = %d\n", x);
}
