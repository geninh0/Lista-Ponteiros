#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mat[4],*p,x;
    p = mat + 1;
    p = mat++;
    p = ++mat;
    x = (*mat)++;
    return 0;
}


/*
    Válidas:
        1°: p = mat + 1;
            Justificativa: a soma do 1 com mat na atribuição ao ponteira é entendida como um deslocamento no endereço de memória guardado
        2°: x = (*mat)++;
            Justificativa: o incremento é feito no próprio valor da vetor, como não foi definido a posição, foi incrementado na posição 0
    
    Inválidas:
        2°: p = ++mat;
            p = mat++;
            Justificativa: o incremento com ++ só é aceito para estruturas com valores modificáveis e não para endereços de memória

*/