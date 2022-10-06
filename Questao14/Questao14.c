#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){
  // A função irá comparar dois valores, enviados pela função qsort(), e irá retornar qual deles é o maior;
  if (*(float*)a > *(float*)b) { // Se o 1º valor é maior que o 2º, ele retornará 1;
      return 1;
   } else if (*(float*)a < *(float*)b) { // Se o 1º valor é maior que o 2º, ele retornará -1;
      return -1;
   } else { // Se os dois valores forem iguais, ele retornará 0;
      return 0;
   }
}

int main(void) {
  int n;
  float *valores, aux;

  printf("Quantos numeros deseja colocar em ordem crescente? ");
  scanf("%d", &n); // Recebendo quantos números serão informados;

  valores = (float*) malloc(n*(sizeof(float))); // Definindo o espaço na memória;

  printf("Informe os numeros deseja colocar em ordem crescente:\n");
  for(int i = 0; i < n; i++){
    scanf("%f", (&valores[i])); // Recebendo os valores que vão ser colocados em ordem crescente;
  }

  // ordem(valores, n);

  qsort(valores, n, sizeof(float), comparacao); // Recebe 4 parâmetros, um ponteiro para o 1º elemento do vetor,
  //a quantidade de elementos, o tamanho (em bytes) de cada elemento e o último parâmetro recebe um ponteiro pra
  // uma função que fará a comparação e retornará um valor maior que zero, menor que zero ou igual a zero;

  printf("Os numeros na ordem crescente sao:\n");
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valores + i));
  }

free(valores); // Liberando o espaço alocado na memória;

  return 0;
}
