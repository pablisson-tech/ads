#include<stdio.h>
#include<stdlib.h>

void main(){

    int numero;

    numero = 1;
/*
    while( numero <= 5){

        printf("\n%d - %d", numero, numero * numero);
        numero++;

    }

    do
    {
        printf("\n%d - %d", numero, numero * numero);
        numero++;

    } while (numero <= 5);
*/            
    for (numero = 1; numero <= 5; numero++)
    {
        
        printf("\n%d - %d", numero, numero * numero);

    }
    


}