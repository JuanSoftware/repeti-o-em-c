#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	int contador=1;
	int ma;
	
	while(contador>0){
		printf("Digite um numero: ");
		scanf("%d",&n);
		if(n>ma){
			ma=n;
		}
		else if(n==-999){
			break;
		}
	}
	printf("%d\n",ma);
}
