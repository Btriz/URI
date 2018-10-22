#include <stdio.h>

int main() {
  int cod, num;
  float tot;
  
  printf("Código do produto e quantidade:\n");
  scanf("%d %d", &cod, &num);

  if (cod==1){
    tot=4.00*num;
    }
  else{
    if (cod==2){
      tot=4.50*num;
    }
    else{
      if (cod==3){
        tot=5.00*num;
      }
      else{
        if (cod==4){
          tot=2.00*num;
        }
        else{
          if (cod==5){
            tot=1.50*num;
          }
          else{
            printf("\nCódigo inválido");
          }
        }
      }
    }
  }
  printf("Total: R$ %.2f\n", tot);
  return 0;
}