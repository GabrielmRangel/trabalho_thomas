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
	//Resposta para menu e notas
	int opcao, notab1, notab2, nota_final, atividades_aula_b1, atividades_aula_b2, atividades_transversal, atividades_virtual;
	//Nome do aluno
	char nome[20];
	//Resposta para sair
	char resposta;
	
	//Repetição
	do
	{	
		//Titulo do menu
		printf("----------------------\n");
		printf("   CÁLCULO DA NOTA    \n");
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
				scanf("%s", &nome);
				
				//Loop de validação
				do
				{
					//Inserir a nota da primeira prova
					printf("Digite a nota da 1a prova (Max. 1000): ");
					scanf("%d", &notab1);
			
					//Validar se é maior que 1000
					if (notab1 > 1000)
					{	
						printf("\nNota acima de 1000 inválida para prova 1!\n\n");	
					}	
				} while (notab1 > 1000);
				
				//Loop de validação
				do
				{
					//Inserir a nota da segunda prova 
					printf("Digite a nota da 2a prova (Max. 4000): ");
					scanf("%d", &notab2);
			
					//Validar se é maior que 4000
					if (notab2 > 4000)
					{
						printf("\nNota acima de 4000 inválida para prova 2! \n\n");	
					}
				} while (notab2 > 4000);
				
				//Loop de validação
				do
				{
					//Inserir a nota da atividade em sala B1
					printf("Digite a nota da atividade em sala do B1 (Max. 1000): ");
					scanf("%d", &atividades_aula_b1);
			
					//Validar se é maior que 1000
					if (atividades_aula_b1 > 1000)
					{
						printf("\nNota acima de 1000 inválida para atividade em sala do B1! \n\n");
					}
				} while (atividades_aula_b1 > 1000);
				
				//Loop de validação
				do
				{
					//Inserir a nota da atividade em sala B2
					printf("Digite a nota da atividade em sala do B2 (Max. 1500): ");
					scanf("%d", &atividades_aula_b2);
			
					//Validar se é maior que 1500
					if (atividades_aula_b2 > 1500)
					{
						printf("\nNota acima de 1500 inválida para atividade em sala do B2! \n\n");
					}
				} while (atividades_aula_b2 > 1500);
				
				//Loop de validação
				do
				{
					//Inserir a nota da atividade transversal
					printf("Digite a nota da atividade transversal (Max. 3500): ");
					scanf("%d", &atividades_transversal);
			
					//Validar se é maior que 3500
					if (atividades_transversal > 3500)
					{	
						printf("\nNota acima de 3500 inválida para atividade transversal! \n\n");
					}
				} while (atividades_transversal > 3500);
				
				//Loop de validação
				do
				{
					//Inserir a nota da atividade virtual
					printf("Digite a nota da atividade virtual (Max. 3000): ");
					scanf("%d", &atividades_virtual);
			
					//Validar se é maior que 3000
					if (atividades_virtual > 3000)
					{
						printf("\nNota acima de 3000 inválida para atividade virtual! \n\n");
					}
				} while (atividades_virtual > 3000);
				
				//Calculo da nota final
				nota_final = notab1 + notab2 + atividades_aula_b1 + atividades_aula_b2, atividades_transversal, atividades_virtual;
				
				//Exibir informações dos alunos
				printf("----------------------\n");
				printf("Nome do aluno: %s\n", nome);
				printf("Nota final: %d\n", nota_final);
				printf("1o critério de aprovação: 1500 \n");
				printf("2o critério de aprovação: 6000 \n");
				
				//Condicional de aprovação
				if (nota_final >= 6000)
				{
					//Aprovado
					printf("Situação final: Aprovado! \n");
				}
				else
				{
					if (nota_final >= 1500)
					{
						//Recuperação
						printf("Situação final: Recuperação! \n");	
					}
					else
					{
						//Reprovado
						printf("Situação final: Reprovado! \n");		
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
				
				//Codicional para finalizar ou não
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
			
			//Outra opção
			default:
			{
				printf("\nOpção invalida!\n\n");
				
				//Termina a escolha
				break;	
			}			
		}	
	} while (opcao != 3);
}
