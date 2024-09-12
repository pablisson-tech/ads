#include <stdio.h>

int main() {
    int idade, num_pessoas, i;

    printf("Digite o número de pessoas: ");
    scanf("%d", &num_pessoas);

    for(i = 0; i < num_pessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade);
        // Agora você pode usar a variável 'idade' para o que você precisa
    }

    return 0;
}
