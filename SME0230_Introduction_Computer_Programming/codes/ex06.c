#include <stdio.h>

int main() {
    int ordem, deslocamento, i, j;

    scanf("%d %d", &ordem, &deslocamento);

    if (ordem <= 0 || deslocamento >= ordem || deslocamento <= -ordem) {
        printf("valor invalido");
    }
    else {
        i = 1;
        // (1) Ordem aqui, como i começa em 0, tem que ser <= (ou só trocar i por 0)
        while (i <= ordem) {
            j = 1;
            // por (1)
            while (j <= ordem) {
                // (2) Se o deslocamento fosse = 0, não seria true na segunda condição
                if (j == i + deslocamento && deslocamento >= 0) {
                    printf("1 ");
                }
                else {
                    // por (2)
                    if (i == j - deslocamento && deslocamento <= 0) {
                        printf("1 ");
                    }
                    else {
                        printf("0 ");
                    }
                }
                j = j + 1;
            }
            i = i + 1;
            printf("\n"); // Nota: Adicionado para quebrar linha entre as linhas da matriz
        }
    }

    return(0);
}