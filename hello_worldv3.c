#include <stdio.h> //Bibioteca de comunica��o com o usuario
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //Biblioteca de aloca��es de texto por regi�o
#include <string.h> //Biblioteca responsavel por cuidar das strings

int registro() //Fun��o responsaval por cadastrar os usu�rio no sistema
{
	//Inicio da cria��o das variaveis
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char idade[4];
	//Fim da cria��o das variaveis/string
	
	printf("Digite o CPF a ser cadastrado:"); //coletando informa��o do usuario
	scanf("%s" , cpf); //%s  refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s" ,nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s" ,sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s" ,cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o ano de nascimento:");
	scanf("%s",idade);
	
	file = fopen(arquivo,"a");
	fprintf(file,idade);
	fclose(file);
	
	
	system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s" ,cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	  printf("N�o foi possivel abrir o arquivo, n�o localizado. \n");	
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("/n Essas s�o as informa��es do usuario:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	setlocale(LC_ALL, "portuguese");
	
	
	char cpf[40];
	
	printf("Digite o CPF a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!. \n");
		system("pause");
	}
}


int main()
     {
    	int opcao=0; //defindo variaveis
    	int laco=1;
    	
    	for(laco=1;laco=1;)
      {

		system("cls"); //responsavel por limpar a tela
	
    	setlocale(LC_ALL, "portuguese"); //defindo o idioma
	
    	printf("###Cart�rio da ebac### \n\n"); // inicio do menu
    	printf("Escolha a op��o desejada no menu \n\n");
    	printf("\t1- Registrar nomes \n");
    	printf("\t2- Consultar nomes \n");
    	printf("\t3- Deletar nomes \n\n");
    	printf("\t4- Sair do sistema\n\n");
    	printf("op��o:"); //fim do menu
	
    	scanf("%d", &opcao); //armazenando a escolha do usuario
	
	
    	system("cls");
    	
    	switch(opcao) //inicio da sele��o
    	{
   	 
    	case 1:
    	registro(); //chamada de fun��es
    	break;
    	
    	case 2:
    	consulta();
    	break;
    	
    	case 3:
    	deletar();
    	break;
    	
    	case 4:
    	printf("Obrigado por utilizar o sistema!\n");
    	return 0;
    	break;
    	
    	default:
    	printf("Essa op��o n�o esta disponivel\n");
    	system("pause");
    	break;
        } //fim da sele��o
     }
	
     }
