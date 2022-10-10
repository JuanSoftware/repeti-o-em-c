#include <stdio.h>

main(){
	int a,b;
	printf("Digite qual o numero que quer começar e qual quer terminar: ");
	scanf("%d%d",&a,&b);
	
	for(a;a<=b;a++){
		printf("%d\n",a);
	}
}
