#include <stdio.h>
int main() {
	int A, B;
	
	printf("Digite 2 números:\n");
	scanf("%d %d", &A, &B);
  
	if(A % B == 0 || B % A == 0){
    printf("São múltiplos\n");
	}
	else{
    printf("Não são múltiplos\n");
	}
  return 0;
}