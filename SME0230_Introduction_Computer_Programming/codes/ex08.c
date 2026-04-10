#include <stdio.h>

int main() {
  int tamanho_carga = 0;
  scanf("%d", &tamanho_carga);

  if (tamanho_carga <= 0) {
    printf("Tamanho invalido.\n");
  } else {
    int teste_paridade = 0;
    int carga[tamanho_carga + 1];

    for (int indexador = 0; indexador <= tamanho_carga; indexador++) {
      scanf("%d", &carga[indexador]);
      teste_paridade += carga[indexador] % 2;
    }

    if (teste_paridade % 2 != 0) {
      printf("Carga util: ");
      for (int indexador = 0; indexador < tamanho_carga; indexador++) {
        printf("%d ", carga[indexador]);
      }
      printf("\n");
    } else {
      printf("Quadro corrompido.\n");
    }
  }

  return 0;
}
