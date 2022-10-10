#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	int contador;
	int soma;
	
	for(contador=25; contador<=200;contador++)
	{
		if (contador%2==0){
			printf("%d\n", contador);
			soma=soma+contador;
		}
	}
	printf("%d",soma-1);
}
