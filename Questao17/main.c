#include <stdio.h>
#include <stdlib.h>

void soma(int tam, int *a, int *b, int *c){
  for(int i = 0; i < tam; i++){
    c[i] = a[i] + b[i];
  }
}

int main(void) {
  int tam;
  printf("Digite a quantidade de elementos dos vetores: ");
  scanf("%d", &tam);
  int a[tam], b[tam], c[tam];

  // Realizar a alocação da memória para os 3 vetores;
  a[tam] = (int*) malloc(tam * (sizeof(int)));
  b[tam] = (int*) malloc(tam * (sizeof(int)));
  c[tam] = (int*) malloc(tam * (sizeof(int)));

  // Preencher os vetores A e B;
  printf("Digite os valores do vetor A:\n");
  for(int i = 0; i < tam; i++){
    scanf("%d", &a[i]);
  }
  printf("Digite os valores do vetor B:\n");
  for(int i = 0; i < tam; i++){
    scanf("%d", &b[i]);
  }

  // Realizar a chamada da função para realizar a soma dos vetores;
  soma(tam, a, b, c);

  // Realizar a impressão do vetor resultante
  printf("\nVetor resultante da soma entre os vetores A e B: ");
    for(int i = 0; i < tam; i++){
      printf("%d ", c[i]);
    }
  return 0;
}
