#include <stdio.h>

int main() {
	
	double  A, B, C;

	printf("digite os valores A, B e C:\n");
	scanf("%lf %lf %lf", &A, &B, &C);

	printf("TRIÂNGULO: %.3lf\nCÍRCULO: %.3lf\nTRAPÉZIO: %.3lf\nQUADRADO: %.3lf\nRETÂNGULO: %.3lf\n", (A * C)/2, 3.14159 * (C * C), ((A + B) * C)/2, B * B, A * B );

	return 0;

}
