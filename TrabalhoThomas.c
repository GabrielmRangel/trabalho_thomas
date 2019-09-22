//Nome: Gabriel Mendes Rangel
//Nome: Laysla A. Ap. Alves Cardoso
//Nome: Daniel Dantas da Silva
//Nome: Vitor Silva Freitas
//Nome: Cau� Camargo Godoy
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
	//Resposta para menu e notas
	int opcao, notab1, notab2, nota_final, atividades_aula_b1, atividades_aula_b2, atividades_transversal, atividades_virtual;
	//Nome do aluno
	char nome[20];
	//Resposta para sair
	char resposta;
	
	//Repeti��o
	do
	{	
		//Titulo do menu
		printf("----------------------\n");
		printf("   C�LCULO DA NOTA    \n");
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
				scanf("%s", &nome);
				
				//Loop de valida��o
				do
				{
					//Inserir a nota da primeira prova
					printf("Digite a nota da 1a prova (Max. 1000): ");
					scanf("%d", &notab1);
			
					//Validar se � maior que 1000
					if (notab1 > 1000)
					{	
						printf("\nNota acima de 1000 inv�lida para prova 1!\n\n");	
					}	
				} while (notab1 > 1000);
				
				//Loop de valida��o
				do
				{
					//Inserir a nota da segunda prova 
					printf("Digite a nota da 2a prova (Max. 4000): ");
					scanf("%d", &notab2);
			
					//Validar se � maior que 4000
					if (notab2 > 4000)
					{
						printf("\nNota acima de 4000 inv�lida para prova 2! \n\n");	
					}
				} while (notab2 > 4000);
				
				//Loop de valida��o
				do
				{
					//Inserir a nota da atividade em sala B1
					printf("Digite a nota da atividade em sala do B1 (Max. 1000): ");
					scanf("%d", &atividades_aula_b1);
			
					//Validar se � maior que 1000
					if (atividades_aula_b1 > 1000)
					{
						printf("\nNota acima de 1000 inv�lida para atividade em sala do B1! \n\n");
					}
				} while (atividades_aula_b1 > 1000);
				
				//Loop de valida��o
				do
				{
					//Inserir a nota da atividade em sala B2
					printf("Digite a nota da atividade em sala do B2 (Max. 1500): ");
					scanf("%d", &atividades_aula_b2);
			
					//Validar se � maior que 1500
					if (atividades_aula_b2 > 1500)
					{
						printf("\nNota acima de 1500 inv�lida para atividade em sala do B2! \n\n");
					}
				} while (atividades_aula_b2 > 1500);
				
				//Loop de valida��o
				do
				{
					//Inserir a nota da atividade transversal
					printf("Digite a nota da atividade transversal (Max. 3500): ");
					scanf("%d", &atividades_transversal);
			
					//Validar se � maior que 3500
					if (atividades_transversal > 3500)
					{	
						printf("\nNota acima de 3500 inv�lida para atividade transversal! \n\n");
					}
				} while (atividades_transversal > 3500);
				
				//Loop de valida��o
				do
				{
					//Inserir a nota da atividade virtual
					printf("Digite a nota da atividade virtual (Max. 3000): ");
					scanf("%d", &atividades_virtual);
			
					//Validar se � maior que 3000
					if (atividades_virtual > 3000)
					{
						printf("\nNota acima de 3000 inv�lida para atividade virtual! \n\n");
					}
				} while (atividades_virtual > 3000);
				
				//Calculo da nota final
				nota_final = notab1 + notab2 + atividades_aula_b1 + atividades_aula_b2, atividades_transversal, atividades_virtual;
				
				//Exibir informa��es dos alunos
				printf("----------------------\n");
				printf("Nome do aluno: %s\n", nome);
				printf("Nota final: %d\n", nota_final);
				printf("1o crit�rio de aprova��o: 1500 \n");
				printf("2o crit�rio de aprova��o: 6000 \n");
				
				//Condicional de aprova��o
				if (nota_final >= 6000)
				{
					//Aprovado
					printf("Situa��o final: Aprovado! \n");
				}
				else
				{
					if (nota_final >= 1500)
					{
						//Recupera��o
						printf("Situa��o final: Recupera��o! \n");	
					}
					else
					{
						//Reprovado
						printf("Situa��o final: Reprovado! \n");		
					}
				}
				
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
				//Pergunta se quer finalizar
				printf("\nTem certeza? [s/n] ");
				scanf("%s", &resposta);
				
				//Codicional para finalizar ou n�o
				if (resposta == 's' || resposta == 'S')
				{
					printf("\nFinalizando o programa!");
				}
				else
				{
					opcao = 0;
				}
				
				//Termina a escolha
				break;		
			}
			
			//Outra op��o
			default:
			{
				printf("\nOp��o invalida!\n\n");
				
				//Termina a escolha
				break;	
			}			
		}	
	} while (opcao != 3);
}
