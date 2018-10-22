#include <stdio.h>

int main() {
  int hi, mi, hf, mf, ht, mt;
	printf("Hora e minuto de início e final do jogo:\n");
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	ht = hf - hi;
	if (ht<0){
		ht += 24;
	}

	mt = mf - mi;
	if(mt < 0){
		mt += 60;
		ht -= 1;
	}

	if(ht == 0 && mt == 0){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
	}
	else{
	printf(" JOGO DUROU %d HORA(S) E %d MINUTO(S)", ht, mt);
	}
  return 0;
}