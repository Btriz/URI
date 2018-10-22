#include <stdio.h>

int main() {
  float n1,n2,n3,n4,med,exa,fin;

	printf("Digite as 4 notas:\n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  
	med=((n1*2)+(n2*3)+(n3*4)+n4)/10;
  
	if(med>=7){
    printf ("Média: %.1f\nAluno aprovado.\n", med);
	}
	else{
		if(med<5){
      printf("Média: %.1f\nAluno reprovado.\n", med);
		}
		else{
      printf ("Média: %.1f\nAluno em exame.\nDigite a nota do exame:\n", med);
  		scanf("%f", &exa);
			printf ("Nota do exame: %.1f\n",exa);
			
			fin=(exa+med)/2;
			
			if(fin>=5){
  			printf ("Aluno aprovado.\n");
			}
			else{ 
			printf ("Aluno reprovado.\n");
			}
			printf ("Media final: %.1lf\n",fin);
		}
	}
	return 0;
}