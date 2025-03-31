#include <stdio.h>
#include <stdlib.h>

int main(void) {

  system("clear");

  int a[10];
  int tamanho = 10;

  scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4],
        &a[5], &a[6], &a[7], &a[8], &a[9]);

  for (int i = 0; i < tamanho; i++) {
    if (i != tamanho - 1) {
      printf("%d ", a[i]);
    } else {
      printf("%d\n", a[i]);
    }
  }
  for (tamanho = 9; tamanho > 0; tamanho--) {

    for (int i = 0; i < tamanho; i++) {
      a[i] += a[i + 1];
    }
    for (int i = 0; i < tamanho; i++) {
      if (i != tamanho - 1) {
        printf("%d ", a[i]);
      } else {
        printf("%d\n", a[i]);
      }
    }
  }

  return 0;
}