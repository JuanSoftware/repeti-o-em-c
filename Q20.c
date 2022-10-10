#include <stdio.h>

main(){
	int n;
	int contador=1;
	int positivo=0;
	
	while(contador>0){
		printf("Digite um numero: ");
		scanf("%d",&n);
		if (n<0){
			break;
		}
		else{
			positivo++;
		}
	}
	printf("%d",positivo);
}
