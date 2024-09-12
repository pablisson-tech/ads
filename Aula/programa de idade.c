#include <stdio.h>
#include <stdlib.h>

int main(){

    int ij, id;

    ij = 17;
    id = 60;

    int idade = 0;

    printf("Digite a idade de uma pessoa:  ");
    scanf("%i", &idade);

    if(idade <= ij){

        printf("Esta e uma pessoa jovem!");

    }else{

        if(idade >= id){
            
            printf("Esta pessoa ja e idosa!");}
        
         else{

        if((idade < id) && (idade > ij)){

        printf("Esta pessoa e adulta!");

      }
     }
    }

    return 0;
}