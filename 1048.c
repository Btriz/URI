#include <stdio.h>

int main() {
	float x, y, r;
	int p;

  printf("Salario atual:\n");
	scanf("%f", &x);

	if (x<=400){
		r = x * 0.15;
		p = 15;
	}
	else{
		if(x<=800){
		r = x * 0.12;
		p = 12;
		}
		else{
			if(x<=1200){
				r = x * 0.10;
				p = 10;
			}
			else{
				if(x<=2000){
				r = x * 0.07;
				p = 7;
				}
				else{
				r = x * 0.04;
				p = 4;
				}
			}
		}
	}
	y = x + r;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", y, r, p);
  return 0;
}