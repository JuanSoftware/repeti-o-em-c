#include <stdio.h>

main(){
	int a;
	int contador;
	for (contador=1; contador<=20;contador++){
		printf("Digite um numero: ");
		scanf("%d",&a);
		
		printf("%d\n",a*a);
	}
}
