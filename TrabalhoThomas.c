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
	//Resposta para menu, nota do B1, B2, atividades e nota final
	int opcao, notab1, notab2, atividades, nota_final;
	//Nome e sobrenome do aluno
	char nome[20], sobrenome[20];
	
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
				scanf("%s", &nome);
				
				//Inserir o sobrenome
				printf("Insira o segundo nome do aluno: ");
				scanf("%s", &sobrenome);
				
				//Inserir a nota da primeira prova
				printf("Digite a nota da 1a prova (Max. 1000): ");
				scanf("%d", &notab1);
				
				//Validar se é maior que 1000
				if (notab1 > 1000)
				{
					printf("\nNumero acima de 1000 inválido para prova 1! \n");
					
					//Termina a escolha
					break;	
				}
				
				//Inserir a nota da segunda prova 
				printf("Digite a nota da 2a prova (Max. 4000): ");
				scanf("%d", &notab2);
				
				//Validar se é maior que 4000
				if (notab2 > 4000)
				{
					printf("\nNumero acima de 4000 inválido para prova 2! \n");
					
					//Termina a escolha
					break;	
				}
				
				//Inserir a nota das atividades 
				printf("Digite a nota das atividades: ");
				scanf("%d", &atividades);
				
				//Calculo da nota final
				nota_final = notab1 + notab2 + atividades;
				
				//Exibir informações dos alunos
				printf("----------------------\n");
				printf("Nome do aluno: %s %s\n", nome, sobrenome);
				printf("Nota final: %.d\n", nota_final);
				printf("1o critério de aprovação: 1500 \n");
				printf("2o critério de aprovação: 6000 \n");
				
				//Condicional de aprovação
				if (nota_final >= 6000)
				{
					printf("1o critério aprovado! \n");
					printf("2o critério aprovado! \n");
					printf("Situação final: Aprovado! \n");
				}
				else
				{
					if (nota_final >= 1500)
					{
						printf("1o critério aprovado! \n");
						printf("2o critério reprovado! \n");
						printf("Situação final: Recuperação! \n");	
					}
					else
					{
						printf("1o critério reprovado! \n");
						printf("2o critério reprovado! \n");
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
