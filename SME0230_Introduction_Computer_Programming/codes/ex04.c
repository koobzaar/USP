#include <stdio.h>

int main(int argc, char *argv[])
{
  int pessoas_na_frente, minha_pos;

  scanf("%d", &pessoas_na_frente);

  minha_pos = pessoas_na_frente % 5;

  switch (minha_pos){
    case 0: 
      printf("Sinto muito! Voce nao ganhou nada...\n");
    break;

    case 1:
      printf("Parabens! Voce ganhou uma foto\n");
    break;

    case 2:
      printf("Parabens! Voce ganhou uma lembrancinha\n");
    break;

    case 3:
      printf("Parabens! Voce ganhou um cupom\n");
    break;

    default:
      printf("Parabens! Voce ganhou um vale-vip\n");

  }


  return 0;
}
