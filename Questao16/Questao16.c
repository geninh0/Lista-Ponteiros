#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Biblioteca respons�vel pela fun��o para medir o tempo de execu��o;

int comparacao(const void *a, const void *b){
  if (*(float*)a > *(float*)b) { // Se o 1� valor � maior que o 2�, ele retornar� 1;
      return 1;
   } else if (*(float*)a < *(float*)b) { // Se o 1� valor � maior que o 2�, ele retornar� -1;
      return -1;
   } else { // Se os dois valores forem iguais, ele retornar� 0;
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
  float *valores, *valor,aux; // Ser�o utilizados dois vetores id�nticos, um para cada fun��o;
  clock_t funcao_q, funcao_o;

  printf("Quantos numeros deseja colocar em ordem crescente? ");
  scanf("%d", &n); // Recebendo quantos n�meros ser�o informados;

  valores = (float*) malloc(n*(sizeof(float))); // Definindo o espa�o na mem�ria;
  valor = (float*) malloc(n*(sizeof(float)));

  printf("Informe os numeros deseja colocar em ordem crescente:\n");
  for(int i = 0; i < n; i++){
    scanf("%f", (&valores[i])); // Recebendo os valores que v�o ser colocados em ordem crescente;
    valor[i] = valores[i];
  }

  //################################### Para a fun��o qsort()###################################
  funcao_q = clock();
  qsort(valores, n, sizeof(float), comparacao);
  funcao_q = clock() - funcao_q;
  //############################################################################################

  // O tempo de execu��o � determinado pela diferen�a entre o tempo de in�cio e tempo de t�rmino;

  //################################### Para a minha fun��o ####################################
  funcao_o = clock();
  ordena(valor, n, comparacao);
  funcao_o = clock() - funcao_o;
  //############################################################################################
  printf("\nFun��o qsort():\n\n");
  printf("Os numeros na ordem crescente sao:\n"); // Imprime o vetor da fun��o qsort();
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valores + i));
  }

  printf("\nMinha fun��o:\n\n");
  printf("Os numeros na ordem crescente sao:\n"); // Imprime o vetor da minha fun��o;
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valor + i));
  }

  printf("\n\nO tempo de execu��o da fun��o qsort foi: %f\n", (((float)funcao_q)/CLOCKS_PER_SEC));
  printf("O tempo de execu��o da minha fun��o foi: %f\n", (((float)funcao_o)/CLOCKS_PER_SEC));

  //Na execu��o em meu notebook, a minha fun��o foi 0,002 milisegundos mais r�pida.

  free(valor);
  free(valores); // Liberando o espa�o alocado na mem�ria;

  return 0;
}
