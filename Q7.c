#include <stdio.h>

main(){
	int a;
	int contador;
	int soma;
	for (contador=25; contador<=200;contador++){
		if(contador%2==0){
			soma=soma+contador;
		}
	}
	printf("%d\n",soma);
}
