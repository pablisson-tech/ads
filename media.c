#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale (LC_ALL,"");

    float n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nAgora digite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nA media entre as duas notas é de: %f", (n1 + n2) / 2);

   
   

}