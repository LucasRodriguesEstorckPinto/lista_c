#include <stdio.h>


int main() {
	int x = 1,aprov =0 , reprov =0, exame=0;
	float n1, n2 , media , media_tot;	
	
	printf("OBS: Validar todas as notas, ou seja, apenas valores de 0 a 10.0 podem ser aceitos.\n");
	
	for (x == 1; x!=7 ; x++) {
		do {
			printf("Digite aqui as duas notas do aluno: ");
			scanf("%f %f",&n1 , &n2);
		}  	while (n1 >10 || n1 <0 || n2 >10 || n2<0);
			
		media_tot = media_tot + n1 + n2;
		media = (n1 + n2) /2;
		
		printf("A media do aluno %d e: %.2f\n\n\n",x,media);
		
		if (media >= 7.0) {
			aprov +=1;
		}
		if (media <7 && media >=4) {
			exame+=1;
		}
		if (media <4) {
			reprov +=1;
		}
		
	}
	
	media_tot = media_tot/12;
	printf("O total de alunos aprovados: %d\n", aprov);
	printf("O total de alunos de exame: %d\n", exame);
	printf("O total de alunos reprovados: %d\n", reprov);
	printf("A media da classe: %.2f",media_tot);
	
	
	
	
	return 0;
}