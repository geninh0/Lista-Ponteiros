#include <stdio.h>
#include <stdlib.h>

void mult(int **a, int **b, int **c, int nl_a, int nc_a, int nl_b, int nc_b){
  int aux;
  // Início do processo de multiplicação matricial;
  for(int i = 0; i < nl_a; i++){
    for(int j = 0; j < nc_b; j++){
      aux = 0;
      for(int k = 0; k < nc_a; k++){
        aux = (a[i][k] * b[k][j]) + aux;
      }
      *(*(c+i)+j) = aux;
    }
  }

}

int main(void) {
  int nc_a = 3, nl_a = 3, nc_b = 3, nl_b = 3, nc_c = 3, nl_c = 3;
  int **a, **b, **c;

  // Alocação das linhas das 3 matrizes;
  a = (int**) malloc(nl_a*(sizeof(int*)));
  b = (int**) malloc(nl_b*(sizeof(int*)));
  c = (int**) malloc(nl_c*(sizeof(int*)));

  //Alocação das colunas de cada matriz;
  for(int i = 0; i < nc_a; i++){
    a[i] = (int*) malloc(nc_a*(sizeof(int)));
  }
  for(int i = 0; i < nc_b; i++){
    b[i] = (int*) malloc(nc_b*(sizeof(int)));
  }
  for(int i = 0; i < nc_c; i++){
    c[i] = (int*) malloc(nc_c*(sizeof(int)));
  }

  // Preenchendo a matriz A;
  for(int i = 0; i < nl_a; i++){
    for(int j = 0; j < nc_a; j++){
      a[i][j] = rand()%30;
    }
  }
  // Preenchendo a matriz B;
  for(int i = 0; i < nl_b; i++){
    for(int j = 0; j < nc_b; j++){
      b[i][j] = rand()%30;
    }
  }

  // Realizando a chamada da função para multiplicação matricial
  mult(a, b, c, nl_a, nc_a, nl_b, nc_b);

  // Realizando a impressão das 3 matrizes;
  // Matriz A;
  printf("\n");
  printf("Matriz A:\n");
  for(int i = 0; i < nl_a; i++){
    for(int j = 0; j < nc_a; j++){
      printf(" %d ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  // Matriz B;
  printf("Matriz B:\n");
  for(int i = 0; i < nl_b; i++){
    for(int j = 0; j < nc_b; j++){
      printf(" %d ", b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  // Matriz C (resultado);
  printf("Matriz C:\n");
  for(int i = 0; i < nl_c; i++){
    for(int j = 0; j < nc_c; j++){
      printf(" %d ", c[i][j]);
    }
    printf("\n");
  }

  // Liberação da memória alocada
  for(int i = 0; i < nl_a; i++){
    free(a[i]);
  }
  for(int i = 0; i < nl_b; i++){
    free(b[i]);
  }
  for(int i = 0; i < nl_c; i++){
    free(c[i]);
  }
  free(a);
  free(b);
  free(c);

  /*Ao executar o código em meu notebook, obtive os seguintes resultados, como não pedia para solicitar
 ao usuário coloquei para aleatório limitado de 0 até 30;

  Matriz A:
 13  16  27
 25  23  25
 16  12  9

  Matriz B:
 1  2  7
 20  19  23
 16  0  6

  Matriz C:
 765  330  621
 885  487  854
 400  260  442

  */

  return 0;
}
