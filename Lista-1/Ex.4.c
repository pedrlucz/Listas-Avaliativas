#include <stdio.h>
#include <stdlib.h>

int main() {

  system("clear");

  char funcionarios = '\0';
  float salario;

  scanf("%c", &funcionarios);
  scanf("%f", &salario);

  switch (funcionarios) {
  case 'a':
    salario = (salario * 5) / 100 + salario;
    printf("R$ %.2f", salario);
    break;
  case 'b':
    salario = (salario * 7) / 100 + salario;
    printf("R$ %.2f", salario);
    break;
  case 'c':
    salario = (salario * 8) / 100 + salario;
    printf("R$ %.2f", salario);
    break;
  }

  return 0;
}