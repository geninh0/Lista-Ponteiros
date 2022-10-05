/* O ponteiro é uma variável que guarda o endereço de uma outra variável, porém este pode ser usado para funções,
ou seja, ele irá armazenar o endereço em que a função está armazenada, e com isso, faz com que seja mais fácil a
alteração em alguma parte do código, além de que assim a função também pode ser passada como argumento para outras
funções. */

#include <stdio.h>

float multip(float x, float y){
  float result;
  result = x * y;
  return result;
}

int main(void) {
  float num1 = 3.5, num2 = 2.5, resultado;
  float (*p_mult)(float, float); // Ponteiro que aponta para uma função e recebe float como parâmetros;
  printf("O valor do primeiro numero eh: %.2f\n", num1);
  printf("O valor do segundo numero eh: %.2f\n", num2);
  p_mult = multip; // Armazenamos o endereço na função no ponteiro;
  resultado = p_mult(num1, num2); // Envia os parâmetros para a função e armazena o resultado na variável resultado;
  printf("O produto deles eh: %.2f\n", resultado);

  return 0;
}
