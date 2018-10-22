#include <stdio.h>

int main(void) {
  int n, x, c = 0;
  	
	for(n = 0; n < 5; n++){
    scanf("%d", &x);
    if(x % 2 == 0){ 
			c++;
		}
  }
  printf("%d valores pares\n", c);
  return 0;
}