#include <stdio.h>

main(){
	int a;
	int contador;
	int maior=0;
	
	for (contador=1;contador<=15;contador++){
		printf("Digite o nuemro: ");
		scanf("%d",&a);
		
		if(a>30){
			maior=maior+1;
		}
	}
	printf("Maiores que 30: %d",maior);
	
}
