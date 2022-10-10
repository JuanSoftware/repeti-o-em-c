#include <stdio.h>

main(){
	int n;
	int contador;
	
	printf("Digite qual numero quer os multiplos: ");
	scanf("%d",&n);
	printf("Quantos multiplos deseja: ");
	scanf("%d",&contador);
	while(contador>=1){
		printf("%d\n",contador*n);
		contador--;
	}
}
