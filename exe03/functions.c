
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){

  int men = v[0];
  int mai = v[0];

  for(int i=0; i<n; i++){

    if(v[i] < men)
      men = v[i];

    if(v[i] > mai)
      mai = v[i];
  }

  *menor = men;
  *maior = mai;

}
