//Nome: Gabriel Mendes Rangel
//Curso: 2� Semestre TADS

//Biblioteca padr�o de entrada e sa�da de informa��es
#include <stdio.h>
//Biblioteca padr�o de condicionais
#include <stdbool.h>
//Biblioteca de idiomas
#include <locale.h>
//Aloca��o de mem�ria, controle de processos e convers�es
#include <stdlib.h>
//Manipula��o de caracteres
#include <conio.h>

//Programa principal
int main()
{
	//Definir o idioma do programa para PT-BR
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de variaveis
	//Resposta para menu
	int opcao;
	//Nome e sobrenome do aluno
	char nome[20], sobrenome[20];
	//Nota do B1, B2 e M�dia
	float notab1, notab2, media;
	
	//Desenvolvendo...
	//Resposta para sair
	//char resposta;
	
	//Repeti��o
	do
	{	
		//Titulo do menu
		printf("----------------------\n");
		printf("   NOTA DOS ALUNOS   \n");
		printf("----------------------\n");
		
		//Op��es
		printf("[1] Cadastrar o aluno \n");
		printf("[2] Limpar Tela \n");
		printf("[3] Finalizar programa \n");
		printf("Escolha uma op��o: ");
		//Entrada de Op��o
		scanf("%d", &opcao);
		
		//Escolha de op��o
		switch (opcao)
		{
			
			//Caso escolha 1
			case 1:
			{
				printf("----------------------\n");
				//Inserir o nome
				printf("Insira o primeiro nome do aluno: ");
				scanf("%s", nome);
				
				//Inserir o sobrenome
				printf("Insira o segundo nome do aluno: ");
				scanf("%s", sobrenome);
				
				//Inserir a nota do primeiro bimestre
				printf("Digite a nota do 1o bimestre: ");
				scanf("%f", &notab1);
				
				//Inserir a nota do segundo bimestre 
				printf("Digite a nota do 2o bimestre: ");
				scanf("%f", &notab2);
				
				//Calculo da m�dia
				media = (notab1 + notab2) / 2;
				
				//Exibir informa��es dos alunos
				printf("----------------------\n");
				printf("Nome do aluno: %s %s\n", nome, sobrenome);
				printf("Nota B1: %.1f\n", notab1);
				printf("Nota B2: %.1f\n", notab2);
				printf("M�dia: %.1f\n", media);
				
				//Termina a escolha
				break;	
			}
			
			//Caso escolha 2
			case 2:
			{
				//Limpa a tela
				system("cls");
				
				//Termina a escolha
				break;			
			}
			
			//Caso escolha 3
			case 3:
			{
				//DESENVOLVIMENTO...
				//printf("Tem certeza? [s/n] ");
				//scanf("%c", resposta);
				
				printf("\nFinalizando o programa!\n");
				
				//Termina a escolha
				break;	
			}
			
			//Outra op��o
			default:
			{
				printf("\nOp��o invalida!\n");
				
				//Termina a escolha
				break;	
			}			
		}	
	} while (opcao != 3);
}
