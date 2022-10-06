#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=1,j=1;
    int *p,*q;
    p = &i;
    q = &j;

    //i = (*p)++ + *q;

    printf("%d",(*p)++);
    printf("\n");
    printf("%d",i);
    /*
    p = i; ilegal, pois o ponteiro não receberá o endereço de memória de i
    i = (*&)j; ilegal, o compilador indica erro nessa estrutura de sintaxe
    q = *p; ilegal, pois o ponteiro q irá receber o valor guardado no endereço de memória indicado pelo ponteiro p
    */
}
