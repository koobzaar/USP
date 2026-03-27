#include <stdio.h>

int main(int argc, char *argv[])
{
  int pontuacao_time = 0, qnt_derrotas = 0;

  scanf("%d %d", &pontuacao_time, &qnt_derrotas);
  
  if (pontuacao_time<0 || qnt_derrotas<0){
    printf("Entrada invalida\n");
    return 0;
  }
  if (pontuacao_time >200 || qnt_derrotas<2) {
    printf("Incrivel\n");
  }
  else if (pontuacao_time > 150 || qnt_derrotas < 3){
    printf("Muito Bom\n");
  }
  else if (pontuacao_time > 100 || qnt_derrotas < 5){
    printf("Bom\n");
  }
  else {
    printf("Decente\n");
  }


  return 0;
}
