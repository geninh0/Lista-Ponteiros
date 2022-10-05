#include <stdio.h>
#include <stdlib.h>

void ordem(float valores[], int n){
  float aux=0;
  for(int i = 0; i < n; i++){ // Vai pegar cada elemento do vetor e no próximo for vai comparar com todos os outros elementos do vetor;
    for(int j = 0; j < n; j++){
      if(valores[i] < valores[j]){
        aux = valores[i];
        valores[i] = valores[j];
        valores[j] = aux;
      }
    }
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

   ordem(valores, n);

  printf("Os numeros na ordem crescente sao:\n");
  for(int i = 0; i < n; i++){
    printf("%f\n", *(valores + i));
  }

free(valores); // Liberando o espaço alocado na memória;

  return 0;
}
