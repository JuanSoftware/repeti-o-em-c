#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	int contador;
	int ma,me;
	
	for (contador=1;contador<=10;contador++){
		printf("Digite um numero: ");
		scanf("%d",&n);
		if(n>ma){
			ma=n;
		}
		if(n<me){
			me=n;
		}
	}
	printf("%d\n%d",ma,me);
}
