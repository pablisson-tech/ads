#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, par;
    
    printf("Digite um numero: ");
    scanf("%d", &a);

  
    if (a > 0 && a < 10)
    {
        printf("Esse numero esta entre zero e 10");
    }else
    {
        printf("Nao esta entre zero e 10");
    }
    
    return 0;
}