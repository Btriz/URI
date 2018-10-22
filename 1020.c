#include <stdio.h>

int main(){
	
	int N,a,m,d;
	printf("Dias:\n");
	scanf("%d",&N);

	a = N/365;
	m = (N % 365)/ 30;
	d = (N % 365)% 30;
    
	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", m);
	printf("%d dia(s)\n", d);

  return 0;
}