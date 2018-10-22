#include <stdio.h>

int main() {
	int N, h = 0, m = 0, s = 0;   
	
	printf("Tempo:");
	scanf("%d",&N);
 
	h = t/3600;
	m = (N - (3600 * h)) / 60;
	s = (N - (3600 * h) - ( m * 60));
	printf("%d:%d:%d\n", h, m, s);

  return 0;
}