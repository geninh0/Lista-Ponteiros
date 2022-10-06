#include <stdio.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    /*
    printf("contador/valor/valor/endereco/endereco \n");
    printf("%x \n",f);
    printf("%x \n",f+1);
    printf("%x \n",f[1]);
   */
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d ",i); //mostra o i da iteração
        printf("vet[%d] = %.1f ",i, vet[i]); //mostra o valor da posição i
        printf("*(f + %d) = %.1f ",i, *(f+i)); //desloca a posição de referência do endereço de memória,puxando o próximo valor do vetor
        printf("&vet[%d] = %X ",i, &vet[i]); //Exibe o endereço conforme a posição i
        printf("(f + %d) = %X ",i, f+i); //Exibe o próximo endereço de memória
    }
}