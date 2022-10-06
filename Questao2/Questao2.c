#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=5,*p;
    p =&i;
    printf("%x %d %d %d %d",p,*p+2,**&p,3**p,**&p+4);
    /*Resposta: p mostrará o endereço da memória da variável i já que é um ponteiro que indica pra essa variável
    *p+2 -> mostrará a soma do valor guardado no endereço de memória de i com 2, resultando em 7
    **&p -> o & indicará o endereço de memória de p, o * puxará o valor guardado em p que é o endereço de memória de i, o segundo * puxará o valor guardado nesse endereço de memória que será o 5
    3**p -> multiplicará 3 pelo valor guardado no endereço de memória indicado pelo ponteiro p, resultando em 15
    **&p+4 -> o & indicará o endereço de memória de p, o * puxará o valor guardado em p que é o endereço de memória de i, o segundo * puxará o valor guardado nesse endereço de memória que será o 5 e irá somar com 4, resultando em 9
    
    valores mostrados no printf: 88bffdcc 7 5 15 9
    */
    return 0;
}
