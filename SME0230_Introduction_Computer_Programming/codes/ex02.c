#include <stdio.h>

int main(int argc, char *argv[])
{
  int numero_paginas = 0, capitulos_livro = 0;
  float tempo_medio_leitura_pagina = 0.0, min_disponiveis_dia = 0.0;

  scanf("%d %d %f %f", &numero_paginas, &capitulos_livro, &tempo_medio_leitura_pagina, &min_disponiveis_dia);

  // --------------------------- 1 --------------------
  // Calcula quanto tempo ela gastaria para ler todas as paginas
  float tempo_gasto_ler_todas_as_paginas = 0.0;
  tempo_gasto_ler_todas_as_paginas = numero_paginas * tempo_medio_leitura_pagina;

  // Com o tempo que gastaria para ler todas as páginas, dividimos pelos minutos disponíveis no dia para saber quantos dias ela demoraria
  float dias_para_terminar = 0.0;
  dias_para_terminar = tempo_gasto_ler_todas_as_paginas / min_disponiveis_dia;

  // -------------------- 2 -------------------
  // Agora com os dias para terminar, precisamos saber quantos páginas ela leria por dia...
  // Pra isso precisamos da quantidade de paginas e a quantidade de dias para ela terminar

  float paginas_por_dia = 0.0;
  paginas_por_dia = numero_paginas / dias_para_terminar;

  // ---------------------- 3 ---------------------
  // Com a quantidade de dias para terminar, da para dividir a quantidade de capitulos pelos dias para temrinar e teremos quantos capitulos por dia
  float capitulos_dia = 0.0;
  capitulos_dia = capitulos_livro / dias_para_terminar;

  printf("Tempo para terminar: %.2f dias\n", dias_para_terminar);
  printf("Paginas por dia: %.2f\n", paginas_por_dia);
  printf("Capitulos por dia: %.2f\n", capitulos_dia); 


  return 0;
}
