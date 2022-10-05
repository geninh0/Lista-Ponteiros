#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Biblioteca responsável pela função para medir o tempo de execução;

int comparacao(const void *a, const void *b){
  if (*(float*)a > *(float*)b) { // Se o 1º valor é maior que o 2º, ele retornará 1;
      return 1;
   } else if (*(float*)a < *(float*)b) { // Se o 1º valor é maior que o 2º, ele retornará -1;
      return -1;
   } else { // Se os dois valores forem iguais, ele retornará 0;
      return 0;
   }
}
void ordena(float *valores, int n, int (*comparacao)(const void *a, const void *b)){
  float aux;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(comparacao((valores+i),(valores+j)) == 1){
        aux = valores[i];
        valores[i] = valores[j];
        valores[j] = aux;
      }
    }
  }
}

int main(void) {
  int n;
  float *valores, *valor,aux; // Serão utilizados dois vetores idênticos, um para cada função;
  clock_t funcao_q, funcao_o;

  printf("Quantos numeros deseja colocar em ordem crescente? ");
  scanf("%d", &n); // Recebendo quantos números serão informados;

  valores = (float*) malloc(n*(sizeof(float))); // Definindo o espaço na memória;
  valor = (float*) malloc(n*(sizeof(float)));

  printf("Informe os numeros deseja colocar em ordem crescente:\n");
  for(int i = 0; i < n; i++){
    scanf("%f", (&valores[i])); // Recebendo os valores que vão ser colocados em ordem crescente;
    valor[i] = valores[i];
  }

  //################################### Para a função qsort()###################################
  funcao_q = clock();
  qsort(valores, n, sizeof(float), comparacao);
  funcao_q = clock() - funcao_q;
  //############################################################################################

  // O tempo de execução é determinado pela diferença entre o tempo de início e tempo de término;

  //################################### Para a minha função ####################################
  funcao_o = clock();
  ordena(valor, n, comparacao);
  funcao_o = clock() - funcao_o;
  //############################################################################################
  printf("\nFunção qsort():\n\n");
  printf("Os numeros na ordem crescente sao:\n"); // Imprime o vetor da função qsort();
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valores + i));
  }

  printf("\nMinha função:\n\n");
  printf("Os numeros na ordem crescente sao:\n"); // Imprime o vetor da minha função;
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valor + i));
  }

  printf("\n\nO tempo de execução da função qsort foi: %f\n", (((float)funcao_q)/CLOCKS_PER_SEC));
  printf("O tempo de execução da minha função foi: %f\n", (((float)funcao_o)/CLOCKS_PER_SEC));

  //Na execução em meu notebook, a minha função foi 0,002 milisegundos mais rápida.

  free(valor);
  free(valores); // Liberando o espaço alocado na memória;

  return 0;
}
