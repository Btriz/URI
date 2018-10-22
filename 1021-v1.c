#include <stdio.h>

int main() {

float A;
int N,a,b,c,d,e,f,g,h,i,j,k,l;

	printf("Valor:\n");
	scanf("%f", &A);
	N = A * 100;
	a = N / 10000;
	b = N % 10000/5000;
	c = N % 10000 % 5000 / 2000;
	d = N % 10000 % 5000 % 2000 / 1000;
	e = N % 10000 % 5000 % 2000 % 1000 / 500;
	f = N % 10000 % 5000 % 2000 % 1000 % 500 / 200;
	g = N % 10000 % 5000 % 2000 % 1000 % 500 % 200 / 100 ;
	h = N % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 / 50;
	i = N % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 / 25;
	j = N % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 % 25 / 10;
	k = N % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 % 25 %10 / 5;
	l = N % 10000 % 5000 % 2000 % 1000 % 500 % 200 % 100 % 50 % 25 %10 % 5;

  printf ("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", a,b,c,d,e,f,g,h,i,j,k,l);

  return 0;
	}