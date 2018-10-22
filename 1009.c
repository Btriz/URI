#include <stdio.h>

int main()
{
	char nome [10];
	double salariofixo, total, vendas;

	printf("Nome do funcionário: ");
	fgets(nome, 10, stdin);
	
	printf("\nSalário fixo: ");
	scanf("%lf", &salariofixo);

	printf("\nValor total em vendas: ");
	scanf("%lf", &vendas);

	total = salariofixo + (vendas * 0.15);

	printf("TOTAL = R$ %.2lf\n", total);

	return 0;
}
