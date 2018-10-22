#include <stdio.h>

int main() {
  int DDD;

	printf("DDD:\n");
	scanf("%d", &DDD);

	if(DDD == 61){
		printf("Brasília");
	}
	else{
		if(DDD == 71){
			printf("Salvador");
		}
		else{
			if(DDD == 11){
				printf("São Paulo");
			}
			else{
				if(DDD == 21){
					printf("Rio de Janeiro");
				}
				else{
					if(DDD == 32){
						printf("Juíz de Fora");
					}
					else{
						if(DDD == 19){
							printf("Campinas");
						}
						else{
							if(DDD == 27){
								printf("Vitória");
							}
							else{
								if(DDD == 31){
									printf("Belo Horizonte");
								}
								else{
									printf("DDD não cadastrado");
								}
							}
						}
					}
				}
			}
		}
	}
  return 0;
}