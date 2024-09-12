#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[8], b[8], c[8];

    for (int i = 0; i <= 7; i++)
    {
        printf("\nVetor a [posicao %d]:", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 7; i++)
    {
        printf("\nVetor b [posicao %d]:", i + 1);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i <= 7; i++)
    {

        c[i] = a[i] + b[i];

        printf("\nSoma da [posicao %d] resultado: %d", i + 1, c[i]);
    }

    return 0;
}