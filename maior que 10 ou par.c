#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, soma;
    
    printf("Digite:");
    scanf("%d", &a);
    printf("\nDigite:");
    scanf("%d", &b);
    
    soma = a + b;
  
    if ((soma > 0 &&  soma < 10) || (soma % 2 ==0))
    {
        printf("Esta entre 0 e 10 ou é par");
    
    }else
    {
        printf("nao e par e não esta entre 0 e 10");
    }
    
    return 0;
}