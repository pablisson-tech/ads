#include <stdio.h>
#include <stdlib.h>

void maior(int x, int y) {
    if (x > y) {
        printf("O 1º valor digitado é o maior\n");
    } else {
        printf("O 2º valor digitado é o maior\n");
    } if (x == y)
    {
        printf("Os valores são iguais\n");
    }
    
}

int main() {
    int a, b;

    printf("Digite o 1º valor: ");
    scanf("%d", &a);

    printf("Digite o 2º valor: ");
    scanf("%d", &b);

    maior(a, b);

    return 0;
}