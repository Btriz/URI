#include <stdio.h>

int main() {
	int A, B;

  printf("Hora de início e final do jogo:");
	scanf("%d %d", &A, &B);

	if (A >= B){
		printf("O JOGO DUROU %d HORA(S)", B + 24 - A);
	}
	else{
		printf("O JOGO DUROU %d HORA(S)", B - A);
	}
  return 0;
}