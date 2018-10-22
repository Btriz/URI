#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
  printf("Digite os 3 valores:\n");
	scanf("%f %f %f", &a, &b, &c);

	if (a < (b + c) && b < (a + c) && c < (a + b)){
		printf("Perímetro= %.1f\n", a + b + c);
	}
	else{
		printf("Área= %.1f\n", ((a+b)*c) /2 );
	}
  return 0;
}