#include <stdio.h>
#include <stdlib.h>

int rDecimal(char nRomano){
  switch (nRomano){
  case 'I':
    return 1;
  case 'V':
    return 5;
  case 'X':
    return 10;
  case 'L':
    return 50;
  case 'C':
    return 100;
  case 'D':
    return 500;
  case 'M':
    return 1000;
  default:
    return 0;
  }
}

int rInteiro(char *nRomano){
  int valorTotal = 0;
  for (int i = 0; nRomano[i] != '\0'; i++){
    int valor = rDecimal(nRomano[i]);
    int pRomano = rDecimal(nRomano[i + 1]);

    if (pRomano > valor) {
      valorTotal += (pRomano - valor);
      i++; 
    } else {
      valorTotal += valor;
    }
  }
  return valorTotal;
}

void dBinario(int decimal, char *binario){ 
    itoa(decimal, binario, 2); 
}

void dHexa(int decimal, char *hexadecimal){
  sprintf(hexadecimal, "%x", decimal);
}

int main(){
  char entradaR[13];
  scanf("%s", entradaR);

  int decimal = rInteiro(entradaR);

  char binario[32];
  dBinario(decimal, binario);

  char hexadecimal[32];
  dHexa(decimal, hexadecimal);

  printf("%s na base 2: %s\n", entradaR, binario);
  printf("%s na base 10: %d\n", entradaR, decimal);
  printf("%s na base 16: %s\n", entradaR, hexadecimal);

  return 0;
}