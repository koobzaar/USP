#include <stdio.h>

int main() {
  int quantidade_cartas = 4;
  int cartas[quantidade_cartas], naipes[quantidade_cartas];

  for (int i = 0; i < quantidade_cartas; i++) {
    scanf("%d %d", &cartas[i], &naipes[i]);
  }

  int entrada_valida = 1;

  for (int i = 0; i < quantidade_cartas; i++) {
    // A carta deve estar entre 1 e 13, mas NÃO pode ser
    //  8, 9 ou 10.
    if (cartas[i] < 1 || cartas[i] > 13 || cartas[i] == 8 || cartas[i] == 9 ||
        cartas[i] == 10) {
      entrada_valida = 0;
      break;
    }

    // O naipe deve ser de 0 a 3.
    if (naipes[i] < 0 || naipes[i] > 3) {
      entrada_valida = 0;
      break;
    }

    // Compara a carta atual com todas as
    // próximas no vetor
    for (int j = i + 1; j < quantidade_cartas; j++) {
      if (cartas[i] == cartas[j] && naipes[i] == naipes[j]) {
        entrada_valida = 0;
        break;
      }
    }

    // Se já encontrou um erro, interrompe o loop principal também
    if (entrada_valida == 0) {
      break;
    }
  }

  // Se a entrada for inválida, imprime a mensagem exata e encerra o programa
  if (entrada_valida == 0) {
    printf("Entrada invalida.\n");
    return 0;
  }
  // O valor base dos numeros
  // 3  > 2 > A > K > J > Q > 7 > 6 > 5 > 4

  // Trocando pelos valores das cartas de figura
  // 3 > 2 > 1 > 13 > 11 > 12 > 7 > 6 > 5 > 4

  // Cartas que foram descartadas e não são usadas no truco viram -1 (8, 9, etc)
  // Na menor carta (4), o poder é 0. Na segunda menor, poder é 1 (5). E assim
  // por diante.
  // Pra ficar mais fácil a consulta, o indice do array vira o valor da carta. E
  // retorna a força. Exemplo: O Ás vale 1. Ele tem o poder 7. Seu poder pode
  // ser consultado só chamando o valor da carta no indice do array: carta[1] =
  // 7
  int forca_base_numeros[14] = {-1, 7, 8, 9, 0, 1, 2, 3, -1, -1, -1, 5, 4, 6};

  // Paus > Copas > Espadas > Ouros
  // 0 > 1 > 2 > 3
  int forca_base_naipes[4] = {3, 2, 1, 0};

  // A manilha vai alterar o valor das cartas. Mas ela também é sempre a carta
  // proxima de maior valor. Se o vira for Ás, a manilha vai ser o 2. Se o vira
  // for 7, a manilha vai ser a Dama (12). Assim, criamos um arry que recebe a
  // vira e retorna a manilha.

  // Índices:            0  1  2  3  4  5  6   7   8   9  10  11  12  13
  // Representação:      -  A  2  3  4  5  6   7   -   -   -   J   Q   K
  int vira_manilha[14] = {-1, 2, 3, 4, 5, 6, 7, 12, -1, -1, -1, 13, 11, 1};

  int forca_rodada[14];

  for (int i = 0; i < 14; i++) {
    forca_rodada[i] = forca_base_numeros[i];
  }

  int vira = cartas[3];

  // Precisamos retornar qual a proxima carta de maior valor
  int manilha_atual = vira_manilha[vira];

  // A força da manilha precisa ser maior que o valor maximo da força base da
  // maior carta, que no caso é o 3 com força 9, então definimos valor 10 (assim
  // ganhando de todas)

  forca_rodada[manilha_atual] = 10;

  int indice_maior = 0;
  int maior_forca = forca_rodada[cartas[0]];

  for (int i = 0; i < quantidade_cartas - 1; i++) {
    int forca_atual = forca_rodada[cartas[i]];

    if (forca_atual > maior_forca) {
      maior_forca = forca_rodada[cartas[i]];
      indice_maior = i;
    }

    else if (forca_atual == maior_forca) {
      // Desempata no naipe
      if (maior_forca == 10) {
        if (forca_base_naipes[naipes[i]] >
            forca_base_naipes[naipes[indice_maior]]) {
          indice_maior = i;
        }
      }

      // Exercicio nao dizia nada sobre o que acontece se ocorrer um empate de
      // duas cartas com valor igual porem diferente de 10. Paciencia.
    }
  }

  printf("%d %d\n", cartas[indice_maior], naipes[indice_maior]);
}
