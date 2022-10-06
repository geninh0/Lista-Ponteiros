#include <stdio.h>

int main(int argc, char const *argv[])
{
    int inteiro[4];
    char charac[4];
    float decimais[4];
    double dobrado[4];

    for(int i=0;i<4;i++){
        printf("%x   ",&charac[i]);
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%x    ",&inteiro[i]);
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%x    ",&decimais[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        printf("%x   ",&dobrado[i]);
    }
}
/*
Valores exibido no meu terminal:
    64fff61c   64fff61d   64fff61e   64fff61f   (char)
    64fff620   64fff624   64fff628   64fff62c   (inteiro)
    64fff600   64fff604   64fff608   64fff60c   (float)
    64fff5e0   64fff5e8   64fff5f0   64fff5f8   (double)

Interpretação: o tipo char salta 1 byte para cada posição lida
o tipo int e float pulam 4 bytes
o tipo double pula 8 bytes

Justificativa: Esses saltos de posição da memória para cada posição do vetor é devido ao tamanho do tipo de dados trabalhado, 
    respeitando o tamanho padrão dos seus tipos
*/