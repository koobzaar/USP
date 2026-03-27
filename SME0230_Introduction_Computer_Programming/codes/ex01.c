#include <stdio.h>

int main(int argc, char *argv[])
{
  int num_bits = 0, freq_coleta = 0, duracao_audio = 0;
  
  
  scanf("%d %d %d", &num_bits, &freq_coleta, &duracao_audio);
  

  float tamanho_audio = 0;
  //                           1 bit = 8 bytes
  tamanho_audio = freq_coleta * (num_bits/8.0f) * duracao_audio;

  printf("O audio tem %.2f bytes\n", tamanho_audio);

  return 0;
}
