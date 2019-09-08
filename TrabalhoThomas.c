//Nome: Gabriel Mendes Rangel
//Curso: 2° Semestre TADS

//Biblioteca padrão de entrada e saída de informações
#include <stdio.h>
//Biblioteca padrão de condicionais
#include <stdbool.h>
//Biblioteca de idiomas
#include <locale.h>
//Alocação de memória, controle de processos e conversões
#include <stdlib.h>
//Manipulação de caracteres
#include <conio.h>

//Programa principal
int main()
{
	//Definir o idioma do programa para PT-BR
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variaveis
	//Resposta para menu
	int opcao;
	//Nome e sobrenome do aluno
	char nome[20], sobrenome[20];
	//Nota do B1, B2 e Média
	float notab1, notab2, media;
	
	//Desenvolvendo...
	//Resposta para sair
	//char resposta;
	
	//Repetição
	do
	{	
		//Titulo do menu
		printf("----------------------\n");
		printf("   NOTA DOS ALUNOS   \n");
		printf("----------------------\n");
		
		//Opções
		printf("[1] Cadastrar o aluno \n");
		printf("[2] Limpar Tela \n");
		printf("[3] Finalizar programa \n");
		printf("Escolha uma opção: ");
		//Entrada de Opção
		scanf("%d", &opcao);
		
		//Escolha de opção
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
				
				//Calculo da média
				media = (notab1 + notab2) / 2;
				
				//Exibir informações dos alunos
				printf("----------------------\n");
				printf("Nome do aluno: %s %s\n", nome, sobrenome);
				printf("Nota B1: %.1f\n", notab1);
				printf("Nota B2: %.1f\n", notab2);
				printf("Média: %.1f\n", media);
				
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
			
			//Outra opção
			default:
			{
				printf("\nOpção invalida!\n");
				
				//Termina a escolha
				break;	
			}			
		}	
	} while (opcao != 3);
}
