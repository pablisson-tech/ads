#include <stdio.h>

int main() {
    int linha, coluna;

    for (linha = 1; linha <= 4; linha++) {
        for (coluna = 1; coluna <= 4; coluna++) {
            printf("%d %d\n", linha, coluna);
        }
    }

    return 0;
}