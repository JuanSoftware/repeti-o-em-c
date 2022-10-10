#include <stdio.h>

main(){
	int a;
	int contador;
	int par=0;
	int impar=0;
	
	for (contador=1;contador<=20;contador++){
		printf("Digite o nuemro: ");
		scanf("%d",&a);
		
		if(a%2==0){
			par=par+1;
		}
		else{
			impar=impar+1;
		}
	}
	printf("%dPares: ",par);
	printf("%dImpares: ",impar);
}
