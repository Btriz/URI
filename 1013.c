#include <stdio.h>
int main() {
	
	int a, b, c;
  printf("Digite 3 valores:\n");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b){
    if(a > c) printf ("%d eh o maior\n",a);
    else printf ("%d eh o maior\n",c);
  }
  if( a < b){
    if(b > c) printf ("%d eh o maior\n",b);
    else printf ("%d eh o maior\n",c);
  }
  return 0;
}