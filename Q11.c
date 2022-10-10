#include <stdio.h>

main(){
	int n;
	int soma=0;
	int contador;
	float media;
	
	for(contador=1;contador<=12;contador++){
		printf("Digite os numeros para tirar a media: ");
		scanf("%d",&n);
		soma=soma+n;
	
	}
	media=soma/12;
		printf("%.2f",media);
}
