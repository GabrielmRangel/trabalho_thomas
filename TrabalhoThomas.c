//Nome: Gabriel Mendes Rangel
//Curso: 2° Semestre TADS

//Biblioteca padrão de entrada e saída
#include <stdio.h>
//Biblioteca padrão de condicionais
#include <stdbool.h>
//Biblioteca de idiomas
#include <locale.h>

//Programa principal
int main()
{
	//Definir o idioma do programa para PT-BR
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variaveis
	//Nota do 1° bimestre
	float notab1;
	//Nota do 2° bimestre
	float notab2;
	//Nome do aluno
	char nome[255];
	//Resposta para menu
	int resposta;
	//Média da nota
	float media;
	
	//Titulo do menu
	printf("----------------------\n");
	printf("   NOTAS DOS ALUNOS   \n");
	printf("----------------------\n");
	//Opções
	printf("[1] Cadastrar um aluno \n");
	printf("[2] Fechar as médias \n");
	printf("[3] Finalizar programa \n");
	printf("Escolha uma opção: \n");
	//Entrada de Opção
	scanf("%d", &resposta);
	
	//Escolha de opção
	switch (resposta)
	{
		//Caso escolha 1
		case 1:
		{
			printf("Insira o nome do aluno: ");
			scanf("%c", &nome);
		}		
	}
}
