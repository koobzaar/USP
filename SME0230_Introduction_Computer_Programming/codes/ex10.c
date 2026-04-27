#include <stdio.h>

int main() {
  int tamanho_matriz = 0;
  scanf("%d", &tamanho_matriz);

  if (tamanho_matriz <= 0) {
    printf("Entrada invalida.");
    return 0;
  }

  int matriz[tamanho_matriz][tamanho_matriz];

  // Lê a matriz inteira.
  // Aqui NÃO pode ser tamanho_matriz - 1.
  for (int i = 0; i < tamanho_matriz; i++) {
    for (int j = 0; j < tamanho_matriz; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  int maior_soma = matriz[0][0];

  int melhor_inicio = 0;

  int melhor_tamanho = 1;

  // Testa todos os tamanhos possíveis:
  // 1x1, 2x2, 3x3, tamanho_matriz x tamanho_matriz.
  for (int tamanho_matriz_busca = 1; tamanho_matriz_busca <= tamanho_matriz;
       tamanho_matriz_busca++) {

    // Testa todos os pontos da diagonal onde uma submatriz desse tamanho cabe.
    //
    // Exemplo:
    // tamanho_matriz = 4
    // tamanho_matriz_busca = 2
    //
    // inicio pode ser 0, 1, 2.
    // inicio = 3 não cabe, porque precisaria acessar índice 4.
    for (int inicio = 0; inicio <= tamanho_matriz - tamanho_matriz_busca;
         inicio++) {

      int soma = 0;

      // Percorre as linhas da submatriz atual.
      // Se inicio = 1 e tamanho_matriz_busca = 2,
      // então i percorre 1 e 2.
      for (int i = inicio; i < inicio + tamanho_matriz_busca; i++) {

        // Percorre as colunas da submatriz atual.
        // Se inicio = 1 e tamanho_matriz_busca = 2,
        // então j percorre 1 e 2.
        for (int j = inicio; j < inicio + tamanho_matriz_busca; j++) {
          soma += matriz[i][j];
        }
      }

      // Se a submatriz atual tem soma maior que a melhor anterior,
      // atualizamos os dados da melhor submatriz.
      if (soma > maior_soma) {
        maior_soma = soma;
        melhor_inicio = inicio;
        melhor_tamanho = tamanho_matriz_busca;
      }
    }
  }

  printf("Soma: %d\n", maior_soma);

  for (int i = melhor_inicio; i < melhor_inicio + melhor_tamanho; i++) {
    for (int j = melhor_inicio; j < melhor_inicio + melhor_tamanho; j++) {
      printf("%d", matriz[i][j]);

      if (j < melhor_inicio + melhor_tamanho - 1) {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
