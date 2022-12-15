#include <stdio.h>
#define TAMANHO 50

int main() {

  FILE *p;
  char texto[TAMANHO];

  printf("insira o conteudo do arquivo e presione ENTER.\n");
  fgets(texto, TAMANHO, stdin);
  (p = fopen("conteudo.txt", "w"));
  if (p == NULL)

  {
    printf("Erro na abertura do arquivo!\n");
  }
  fputs(texto, p);
  fclose(p);

  return 0;
}
