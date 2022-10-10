#include <stdio.h>

main(){
	int n;
	int contador;
	
	printf("Quantos multiplos deseja: ");
	scanf("%d",&contador);
	while(contador>=1){
		printf("%d\n",contador*3);
		contador--;
	}
}
