/* O ponteiro � uma vari�vel que guarda o endere�o de uma outra vari�vel, por�m este pode ser usado para fun��es,
ou seja, ele ir� armazenar o endere�o em que a fun��o est� armazenada, e com isso, faz com que seja mais f�cil a
altera��o em alguma parte do c�digo, al�m de que assim a fun��o tamb�m pode ser passada como argumento para outras
fun��es. */

#include <stdio.h>

float multip(float x, float y){
  float result;
  result = x * y;
  return result;
}

int main(void) {
  float num1 = 3.5, num2 = 2.5, resultado;
  float (*p_mult)(float, float); // Ponteiro que aponta para uma fun��o e recebe float como par�metros;
  printf("O valor do primeiro numero eh: %.2f\n", num1);
  printf("O valor do segundo numero eh: %.2f\n", num2);
  p_mult = multip; // Armazenamos o endere�o na fun��o no ponteiro;
  resultado = p_mult(num1, num2); // Envia os par�metros para a fun��o e armazena o resultado na vari�vel resultado;
  printf("O produto deles eh: %.2f\n", resultado);

  return 0;
}
