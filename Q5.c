#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	int contador;
	float a,b;
	
	for(contador=1; contador<=10;contador++)
	{
		printf("Digite um numero e vamos imprimir a metade: ");
		scanf("%f",&a);
		b= a/2;
		printf("%.2f\n",b);	
	}
	
}
