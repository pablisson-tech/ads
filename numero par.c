#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, par;
    
    printf("Digite um numero: ");
    scanf("%d", &a);

    par = a % 2;
    

    if (par == 0)
    {
        printf("\nEsse numero e par.\n");
    }else
    {
         printf("\nEsse numero e impar");
    }
    
    

    return 0;
}