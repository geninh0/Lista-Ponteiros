#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10; // declaração do valor da variável
    p1 = &valor; // recebimento do endereço de memória para o ponteiro p1
    *p1 = 20;  // alteração o valor indicado no endereço de memória indicado para 20
    printf("%d \n", valor); // esperado: 20
    //printado: 20

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0; // alteração o valor indicado no endereço de memória indicado para 29.0
    printf("%.1f \n", temp); // esperado: 29.0
    //printado 29.0

      /* (c) */
    p3 = &nome[0]; // o ponteiro p3 recebe o endereço de memória da posição 0 do vetor nome
    aux = *p3; // a variável aux recebe o valor presente no endereço de memória de nome[0] que é P
    printf("%c \n", aux); //esperado: P
    //printado P

    /* (d) */
    p3 = &nome[4]; // o ponteiro p3 recebe o endereço de memória da posição 4 do vetor nome
    aux = *p3; // aux recebe o valor presente no endereço de memória indicado por p3
    printf("%c \n", aux);// esperado: e
    //printado e

    /* (e) */
    p3 = nome; //nome está definido como ponteiro de um char e da forma que está definido, receberá apenas o primeiro elemento da string escrita
    printf("%c \n", *p3);//esperado:P
    //printado P

    /* (f) */
    p3 = p3 + 4; //p3 guarda um endereço de memória, ao somar 4, o endereço é deslocado em 4 posições
    printf("%c \n", *p3);//esperado: e
    //printado e

    /* (g) */
    p3--;//a posição de memória guardada foi deslocada em 1 unidade, ou seja, uma posição a menos (Como já foi somado 4 posições no item f, ficará 3 posições deslocadas)
    printf("%c \n", *p3);// esperado: t
    //printado t

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor; // esperado: erro
    idade = *p4;
    printf("%d \n", idade);
    //printado: 31

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);//esperado: 45
    //printado: 45 

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);//esperado: 27
    //esperado: 27

    /* (l) */
    p4 = p4 - 2;
    idade = *p4; 
    printf("%d \n", idade); //esperado: 31
    //printado: 31

     /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5); //esperado: 45
    //printado: 45

    /* (n) */
    p5++;
    printf("%d \n", *p5); //esperado: 27
     //esperado: 27
    return(0);

}