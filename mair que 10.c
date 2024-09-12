#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b ,c;
    
    printf("Digite:");
    scanf("%d", &a);
    printf("\nDigite:");
    scanf("%d", &b);
    printf("\nDigite:");
    scanf("%d", &c);
  
    if (a > 10  && b > 10 && c > 10)
    {
        printf("os tres numeros sao maoires que 10");
    
    }else
    {
        printf("Os numeros nao sao maiores que 10");
    }
    
    return 0;
}