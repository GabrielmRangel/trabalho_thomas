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
	//Resposta para menu, nota do B1, B2, atividades e nota final
	int opcao, notab1, notab2, atividades, nota_final;
	//Nome e sobrenome do aluno
	char nome[20], sobrenome[20];
	
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
				scanf("%s", &nome);
				
				//Inserir o sobrenome
				printf("Insira o segundo nome do aluno: ");
				scanf("%s", &sobrenome);
				
				//Inserir a nota da primeira prova
				printf("Digite a nota da 1a prova (Max. 1000): ");
				scanf("%d", &notab1);
				
				//Validar se � maior que 1000
				if (notab1 > 1000)
				{
					printf("\nNumero acima de 1000 inv�lido para prova 1! \n");
					
					//Termina a escolha
					break;	
				}
				
				//Inserir a nota da segunda prova 
				printf("Digite a nota da 2a prova (Max. 4000): ");
				scanf("%d", &notab2);
				
				//Validar se � maior que 4000
				if (notab2 > 4000)
				{
					printf("\nNumero acima de 4000 inv�lido para prova 2! \n");
					
					//Termina a escolha
					break;	
				}
				
				//Inserir a nota das atividades 
				printf("Digite a nota das atividades: ");
				scanf("%d", &atividades);
				
				//Calculo da nota final
				nota_final = notab1 + notab2 + atividades;
				
				//Exibir informa��es dos alunos
				printf("----------------------\n");
				printf("Nome do aluno: %s %s\n", nome, sobrenome);
				printf("Nota final: %.d\n", nota_final);
				printf("1o crit�rio de aprova��o: 1500 \n");
				printf("2o crit�rio de aprova��o: 6000 \n");
				
				//Condicional de aprova��o
				if (nota_final >= 6000)
				{
					printf("1o crit�rio aprovado! \n");
					printf("2o crit�rio aprovado! \n");
					printf("Situa��o final: Aprovado! \n");
				}
				else
				{
					if (nota_final >= 1500)
					{
						printf("1o crit�rio aprovado! \n");
						printf("2o crit�rio reprovado! \n");
						printf("Situa��o final: Recupera��o! \n");	
					}
					else
					{
						printf("1o crit�rio reprovado! \n");
						printf("2o crit�rio reprovado! \n");
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
