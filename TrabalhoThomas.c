//Nome: Gabriel Mendes Rangel
//Curso: 2� Semestre TADS

//Biblioteca padr�o de entrada e sa�da
#include <stdio.h>
//Biblioteca padr�o de condicionais
#include <stdbool.h>
//Biblioteca de idiomas
#include <locale.h>

//Programa principal
int main()
{
	//Definir o idioma do programa para PT-BR
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de variaveis
	//Nota do 1� bimestre
	float notab1;
	//Nota do 2� bimestre
	float notab2;
	//Nome do aluno
	char nome[255];
	//Resposta para menu
	int resposta;
	//M�dia da nota
	float media;
	
	//Titulo do menu
	printf("----------------------\n");
	printf("   NOTAS DOS ALUNOS   \n");
	printf("----------------------\n");
	//Op��es
	printf("[1] Cadastrar um aluno \n");
	printf("[2] Fechar as m�dias \n");
	printf("[3] Finalizar programa \n");
	printf("Escolha uma op��o: \n");
	//Entrada de Op��o
	scanf("%d", &resposta);
	
	//Escolha de op��o
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
