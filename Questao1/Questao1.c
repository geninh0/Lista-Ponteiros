#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=3,j=5;
    int *p,*q;
    p = &i;
    q = &j;

    p == &i; //TRUE, pois o valor guardado em p é igual ao endereço de i
    *p-*q; //-2, pois o uso do "*" referencia o valor guardado na memoria do ponteiro, assim, subtrai os valores
    **&p; //3, pois o & puxa o endereço de p, sendo que * vai atrás do valor guardado no endereço, que é o endereço de i, o outro * puxa o valor guardado nesse endereço que é 3
    3-*p/(*q)+7;//10, pois a divisão de 3 por 5 resulta em 0,6; assim fica sem parte inteira significativa na conta, resultando em 7+3=10

    return 0;
}
