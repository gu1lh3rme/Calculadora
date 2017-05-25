#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
	return x+y;	//Alteração feita na branch fSoma
}

int subtrai(int x, int y){
	return x-y;
}

int multiplica(int x, int y){
	return x*y;
}

int divide(int x, int y){
	if(y != 0)
		return x/y;
	return -299;
}

int main(){
	printf("Hello git!");
	printf("Soma: %d\n",soma(2,2));
	printf("Subtração: %d\n",subtrai(5,2));
	printf("Multiplica: %d\n",multiplica(5,2));
	printf("\n");
	return 0;
}
