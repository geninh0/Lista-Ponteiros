#include <stdio.h>

int main(void) {
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i = 3;

  aloha[2] = value; // V�lido;
  scanf("%f", &aloha); // V�lido;
  aloha = value; // Inv�lido, pois n�o foi informado a posi��o do vetor que seria guardada a informa��o;
  printf("%f", aloha); // V�lido;
  coisas[4][4] = aloha[3]; // V�lido;
  coisas[5] = aloha; // Inv�lido, pois n�o para inserir dados numa matriz � necess�rio o �ndice da linha e da coluna;
  pf = value; // Inv�lido, pois pf � um ponteiro e s� guarda endere�o, logo � necess�rio um & para guardar o endere�o da v�riavel value;
  pf = aloha; // V�lido;

  return 0;
}
