#include <stdio.h>

int main(void) {
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i = 3;

  aloha[2] = value; // Válido;
  scanf("%f", &aloha); // Válido;
  aloha = value; // Inválido, pois não foi informado a posição do vetor que seria guardada a informação;
  printf("%f", aloha); // Válido;
  coisas[4][4] = aloha[3]; // Válido;
  coisas[5] = aloha; // Inválido, pois não para inserir dados numa matriz é necessário o índice da linha e da coluna;
  pf = value; // Inválido, pois pf é um ponteiro e só guarda endereço, logo é necessário um & para guardar o endereço da váriavel value;
  pf = aloha; // Válido;

  return 0;
}
