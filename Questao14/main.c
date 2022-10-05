#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){
  // A fun��o ir� comparar dois valores, enviados pela fun��o qsort(), e ir� retornar qual deles � o maior;
  if (*(float*)a > *(float*)b) { // Se o 1� valor � maior que o 2�, ele retornar� 1;
      return 1;
   } else if (*(float*)a < *(float*)b) { // Se o 1� valor � maior que o 2�, ele retornar� -1;
      return -1;
   } else { // Se os dois valores forem iguais, ele retornar� 0;
      return 0;
   }
}

int main(void) {
  int n;
  float *valores, aux;

  printf("Quantos numeros deseja colocar em ordem crescente? ");
  scanf("%d", &n); // Recebendo quantos n�meros ser�o informados;

  valores = (float*) malloc(n*(sizeof(float))); // Definindo o espa�o na mem�ria;

  printf("Informe os numeros deseja colocar em ordem crescente:\n");
  for(int i = 0; i < n; i++){
    scanf("%f", (&valores[i])); // Recebendo os valores que v�o ser colocados em ordem crescente;
  }

  // ordem(valores, n);

  qsort(valores, n, sizeof(float), comparacao); // Recebe 4 par�metros, um ponteiro para o 1� elemento do vetor,
  //a quantidade de elementos, o tamanho (em bytes) de cada elemento e o �ltimo par�metro recebe um ponteiro pra
  // uma fun��o que far� a compara��o e retornar� um valor maior que zero, menor que zero ou igual a zero;

  printf("Os numeros na ordem crescente sao:\n");
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valores + i));
  }

free(valores); // Liberando o espa�o alocado na mem�ria;

  return 0;
}
