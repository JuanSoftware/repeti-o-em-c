#include <stdio.h>

main(){
	int n;
	int contador=1;
	
	while(contador>0){
		printf("Digite um numero: ");
		scanf("%d",&n);
		if (n==-999){
			break;
		}
		else{
			printf("%d\n",n*3);
		}
	}
}
