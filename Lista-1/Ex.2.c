#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,digito,soma=0;

  scanf("%d",&n);

  if(n%2==0){
    printf("%d eh par\n", n); 
  }
  else{
    printf("%d eh impar\n", n);
  }

  int nOriginal = n;

  if(n==0){
    printf("A soma dos algarismos de 0 eh igual a 0\n");
          }

  else{
     while (n != 0) {

        digito = n % 10; 
        soma += digito;       
        n /= 10;  

                    }
        }  

  if(nOriginal!=0){
  printf("A soma dos algarismos de %d eh %d\n", nOriginal,soma);

  }
  else{

  }

  return 0;
}