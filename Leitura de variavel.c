#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/// @brief 
void main(){

        setlocale (LC_ALL,"");

        printf("Olá \n");
        int a = 12;

        printf("O valor de A é igual a: %d \n", a);
        scanf("%d", &a);
        printf("O valor de A mudou para: %d \n", a);

        float b = 6.9;

        printf("O valor de B e igual a: %.2f \n", b);
        scanf("%f", &b);
        printf("o valor de B mudou para: %.2f \n", b);

        char letra = 'p';

        printf("o valor de letra é: %c\n", letra);
        fflush(stdin);
        scanf("%c", &letra);
        printf("o valor de letra mudou para: %c", letra);

}
