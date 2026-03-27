#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entrada = 0, iteracoes = 0;
    float valor_atual;

    scanf("%d", &entrada);
    // 0 entra na conjectura? 🤔
    if(entrada<=0){
        printf("valor invalido");
        return 0;
    }
    printf("(");

    while (entrada!=1){
        printf("%d, ", entrada);
        // Se o ultimo bit for 1, então o número é impar (3 = 0011)
        // Se o GCC optimiza o %2 pra isso eu não sei, mas acho bonitinho (provavelmente deve optimizar)
        if ((entrada & 1) == 0 ) {
            entrada /= 2;
        }
        else {
            entrada = entrada*3+1;
        }
        iteracoes++;
        
    }
    printf("1)\n%d", iteracoes);
    
    return 0;
}
