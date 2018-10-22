#include <stdio.h>
int main()
{
	int cod1, cod2, quant1, quant2;
	float val1, val2, x;
	
	printf("Digite o código, quantidade e valor unitário da peça 1:\n");
	scanf("%d %d %f", &cod1, &quant1, &val1);

	printf("Digite o código, quantidade e valor unitário da peça 2:\n");
	scanf("%d %d %f", &cod2, &quant2, &val2);

	x = (quant1*val1) + (quant2*val2);

	printf("VALOR A PAGAR: R$ %.2f\n", x);	
	
  return 0;
}    
