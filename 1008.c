#include <stdio.h>
 
int main() {
 
 	int a,b;
  float c;

	printf("Número do funcionário:\n");
	scanf("%d", &a);

	printf("Horas trabalhadas:\n");
	scanf("%d", &b);

	printf("Valor da hora trabalhada:\n");
	scanf("%f", &c);

	printf("NÚMERO = %d\nSALÁRIO = R$ %.2f\n", a, b * c);

 
    return 0;
}
