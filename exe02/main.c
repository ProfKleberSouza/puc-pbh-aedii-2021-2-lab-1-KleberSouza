#include <stdio.h>
#include "functions.h"

int main() {

  int v[1000], n;

  scanf("%d", &n);

  for(int i=0; i<n;i++)
    scanf("%d", &v[i]);

  int resultado = menor(v,n);

  printf("MENOR = %d\n", resultado); 

  return(0);
}