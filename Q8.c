#include <stdio.h>
#include <stdlib.h>

main() {


    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite quantos numero quer: ");
    scanf("%d", &n);
    printf("\nserie:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}
