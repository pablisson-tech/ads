#include <stdio.h>
#include <stdlib.h>


int main() {

    float nota[12], soma = 0;
    
    for (int i = 0; i <= 11; i++)
    {
       printf("\nDigite a nota do aluno %d:", i+1);
       scanf("%f", &nota[i]);
    
       soma += nota[i];      

    }

    printf("\nA media das notas e: %.2f", soma/12);
    printf("%.2f", nota[0]);
   

    return 0;
}