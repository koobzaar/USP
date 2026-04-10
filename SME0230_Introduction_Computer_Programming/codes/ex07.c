#include <stdio.h>

int main() {
  int quantidade_palitos = 0;

  scanf("%d", &quantidade_palitos);

  if (quantidade_palitos <= 0) {
    printf("Erro: quantidade inicial invalida\n");
    return 0;
  }

  int palitos_restantes = quantidade_palitos;

  int maior_retirada = 0;

  int vencedor = 0;

  for (int rodada = 0; quantidade_palitos != 0; rodada++) {
    int retirada = 0;
    scanf("%d", &retirada);

    if (retirada < 1 || retirada > 3 || retirada > quantidade_palitos) {
      printf("Erro: jogada invalida\n");
      rodada--;
    } else {
      quantidade_palitos -= retirada;
      if (retirada > maior_retirada) {
        maior_retirada = retirada;
      }
    }
    vencedor = rodada % 2;
  }
  printf("Vencedor: Jogador ");
  if (vencedor == 1) {
    printf("1");
  } else {
    printf("2");
  }
  printf("\nMaior retirada: %d\n", maior_retirada);

  return 0;
}
