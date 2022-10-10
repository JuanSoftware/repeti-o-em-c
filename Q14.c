#include <stdio.h>

main(){
	int a;
	int contador;
	int positivo=0;
	int negativo=0;
	
	for (contador=1;contador<=20;contador++){
		printf("Digite o nuemro: ");
		scanf("%d",&a);
		
		if(a>0){
			positivo=positivo+a;
		}
		else{
			negativo=negativo+1;
		}
	}
	printf("soma dos positivos: %d\n",positivo);
	printf("Quantidade de negativos: %d", negativo);
	
}
