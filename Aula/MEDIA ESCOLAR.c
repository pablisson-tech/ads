#include <stdio.h>
#include <stdlib.h>


int main(){


    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\t\t\t\tMedia escolar 1.0\n\n\n");
    printf("Digite a sua primeira nota bimestral: ");
    scanf("%f", &nota1);
     printf("Digite a sua segunda nota bimestral: ");
    scanf("%f", &nota2);
     printf("Digite a sua terceira nota bimestral: ");
    scanf("%f", &nota3);
     printf("Digite a sua quarta nota bimestral: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A sua media escolar foi de: %f\n\n", media);

    if( media >= 7 ){

        printf("****Voce esta aprovado****\n");

    }else{

        printf("Vai estudar seu vagabundo, voce esta REPROVADO\n");
    }


    return 0; 
}