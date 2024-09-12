#include <stdio.h>
#include <stdlib.h>
 
 
int main(){

    int obs;
    float n1, n2, n3, resultado;

    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);
    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);

    printf("\nAgora digite uma opcao de 1 a 2: ");
    scanf("%d", &obs);

    switch (obs)
    {
        case 1 : {


            resultado = (n1 + n2 + n3);

            if (resultado == 80)
            {
                /* code */
                printf("\nSoma\n");

            }else
            {
                printf("\nSubtracao\n");

            }
            
        break;    

                 }

        case 2 : {

            resultado = (n1 - n2);

            if (resultado <= 9)
            {
                /* code */
                printf("\nDivisao\n");

            }else
            {
                /* code */
                resultado = (n1+n3) - n2;

                printf("\nResultado: %f", resultado);

            }

        }

        break;
    
    default:
        break;

    }
return 0;
    
}