#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct faculdade_pitagoras {
	char aluno[20];
	char disciplina[20];
	float nota;
};

int main (void) {
	int i;
	int qtd;	
struct faculdade_pitagoras computacao[20];
	
	printf ("         Preencha os Dados do Aluno       \n\n");
	
	printf ("Quantos alunos deseja listas? ");
	scanf ("%d", &qtd);
	printf ("\n");
		for (i=0; i<qtd; i++) {
			printf ("Nome do Aluno: ");
			fflush(stdin);
			scanf ("%s", &computacao[i].aluno);
			
			printf ("Disciplina: ");
			fflush(stdin);
			scanf ("%s", &computacao[i].disciplina);
			
			printf ("Nota: ");
			scanf ("%f", &computacao[i].nota);
			printf ("\n");
		
		}
		
	printf ("\n        imprimindo Dados fornecidos \n\n");
		
		for (i=0; i<qtd; i++) {
			printf ("Nome: %s\n", computacao[i].aluno);
			printf ("Disciplina: %s\n", computacao[i].disciplina);
			printf ("Nota: %2.1f\n", computacao[i].nota);
		}
	return 0;
}
