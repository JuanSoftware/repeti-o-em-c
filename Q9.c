#include <stdio.h>
#include <stdlib.h>

main() {
	int n, a, b, auxiliar=0;
	printf("Digite o primeiro termo para s�rie de Ricci: ");
	scanf("%d", &a);

	printf("Digite o segundo termo para s�rie de Ricci: ");
	scanf("%d", &b);

	printf("Digite o n�mero de termos que deseja para a s�rie de Ricci: ");
	scanf("%d", &n);
	

	printf("%d\n%d\n", a , b);
	
	while(n>0,n--){
			auxiliar = a+b;
			a = auxiliar;
			b = auxiliar;
			if(n>1){
				printf("%d\n", auxiliar);
			} else {
				printf("%d\n", auxiliar);
				}

		}


}
