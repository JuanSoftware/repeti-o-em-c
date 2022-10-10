#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	int contador;
	int soma=0;
	int a;
	
	for(contador=1; contador<=2;contador++)
	{
		printf("Digite um numero e vamos imprimir o quadrado: ");
		scanf("%d",&a);
		if (a*a<225){
			soma=soma+a;
		}
		
	}
	printf("%d",soma);
}
