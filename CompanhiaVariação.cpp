#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>


struct acoes_na_bolsa {
	
	char nome[5];
	char areaatuacao[5];
	float valoratual;
	float valoranterior;
	double variacao;
};

int main () {
	struct acoes_na_bolsa empresa[5];
		printf ("\n\n              Dados da Companhia \n\n");	
			
	for (int i=0; i<5; i++) {
	
		printf ("Qual nome da Companhia?\n");
		scanf ("%s", &empresa[i].nome);
		printf ("Qual a area de atuacao?\n");
		scanf ("%s", &empresa[i].areaatuacao);
		printf ("Valor atual da acao:\n");
		scanf ("%f", &empresa[i].valoratual);
		printf ("Valor anterior da acao:\n");
		scanf ("%f", &empresa[i].valoranterior);
		fflush(stdin);
		
		empresa[i].variacao = (empresa[i].valoratual / empresa[i].valoranterior -1 ) *100;
		printf ("Companhia: %s\n", &empresa[i].nome);
		printf ("Area de Atuacao: %s\n", &empresa[i].areaatuacao);
		printf ("Variacao da Bolsa: %2.1f", empresa[i].variacao);
		printf (" por cento. \n");
		printf ("-----------------------------------------------------\n\n");
		
	}

	return 0;
}
