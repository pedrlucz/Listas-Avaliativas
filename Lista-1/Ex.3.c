#include <stdio.h>
#include <stdlib.h>

int main() {
  int senha_cadastro;
  int senha_incorreta = 1;
  int senha_teste;

  scanf("%d%*c", &senha_cadastro);
  printf("senha cadastrada: %d\n", senha_cadastro);

  while (senha_incorreta == 1) {

    scanf("%d%*c", &senha_teste);
    if (senha_teste != senha_cadastro) {
      printf("senha invalida!\n");
    }
    if (senha_teste == senha_cadastro) {
      printf("senha valida!\n");
      senha_incorreta = 0;
    }
  }
 
  return 0;
}