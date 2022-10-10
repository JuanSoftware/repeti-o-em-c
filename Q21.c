#include <stdio.h>

main(){
	int n;
	int contador=1;
	int div=0;
	int media;
	int soma=0;
	
	while(contador>0){
		printf("Digite um numero e 0 para fechar: ");
		scanf("%d",&n);
		if(n==0){
			break;
		}
		else{
			soma=soma+n;
			div=div+1;
		}
	}
	media=soma/div;
	printf("%d",media);
}
