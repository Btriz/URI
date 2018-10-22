#include <stdio.h>

int main() {
	
	int n, p = 0;
	float a;
  printf("Digite 6 valores, um de cada vez:\n");

	for(n = 0; n < 6; n++){
		scanf("%f", &a);
		if (a > 0){
			p++;
	}
	}
	printf("%d valores positivos\n", p);
  return 0;
}