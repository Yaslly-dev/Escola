#include <stdio.h>
#include <locale.h>

int i, x;
main(void){
	
	setlocale(LC_ALL, "");
	printf("Quantos alunos serão cadastrados?");
	scanf("%d", &x);
	
	char nome[x][50];
	float nota1[x], nota2[x], media[x];
	
	for(i=1; i<=x; i++){
		
		printf("Digite o nome do aluno:");
		fflush(stdin);
		gets(nome[i]);
		
		printf("1° NOTA:\n");
		fflush(stdin);
		scanf("%f", &nota1[i]);
		
		printf("2° NOTA:\n");
		fflush(stdin);
		scanf("%f", &nota2[i]);	
		
		media[i] = (nota1[i]+nota2[i])/2;
		system("cls");
		

	}
	
		for(i=1; i<=x; i++){
		
		printf("DADOS CADASTRADOS!\n");
		printf("Aluno: %s\n", nome[i]);
		printf("1°NOTA: %.2f\n2°NOTA: %.2f\n", nota1[i], nota2[i]);
		printf("MÉDIA: %.2f\n", media[i]);
		
		if(media[i]>=7){
			printf("APROVADO!\n");
			printf("-------------------------------\n");
		}
		if(media[i]<7){
			printf("REPROVADO!\n");
			printf("-------------------------------\n");
		}
		}
	
}
