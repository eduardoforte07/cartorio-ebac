#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca responsavel por cuidar das string
  
    int registro() // funcao para registro no sistema
    {
	// inicio criacao de variaveis string
    char arquivo[40];
     char cpf[40];
     char nome[40];
     char sobrenome [40];
     char cargo[40];
     // final da criacao variavel string
     
    printf("Digite o CPF a ser cadastrado: "); // coletando informacao do usuario
    scanf("%s", cpf); // % refere se a string
    
	strcpy(arquivo, cpf); // responsavel por copiar os valore da string
	
	 FILE*file; // cria o arquivo
	 file = fopen(arquivo, "w");
	 fprintf(file,cpf); // salvo valor da variavel
	 fclose(file); // fecha o arquivo
	 
	 file = fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("digite o nome a ser cadastrado");
	 scanf("%s", nome );
	 
	 file = fopen(arquivo,"a");
	 fprintf(file,nome);
	 fclose(file);
	 
	file = fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("digite o sobrenome a ser cadastrado");
	 scanf("%s", sobrenome);
	 
	 file = fopen(arquivo,"a");
	 fprintf(file, sobrenome);
	 fclose(file);
	 
	 file = fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("digite o cargo a ser cadastrado: ");
	 scanf("%s", cargo);
	 
	 file = fopen(arquivo,"a" );
	 fprintf(file,cargo);
	 fclose(file);
	 
	 system("pause");
	 
   }
    
    int consulta()
    {
   	 setlocale(LC_ALL, "Portuguese");// definindo linguagem
   	 
     char cpf[40];
     char conteudo[200];
     
     printf("digite o cpf a ser consultado: ");
     scanf("%s", cpf);
     
     FILE *file;
     file = fopen(cpf, "r");
     
   if(file == NULL)
   {
   	printf("n�o foi possivel abrir o arquivo, n�o localizado.\n");
   }
   
   while(fgets(conteudo, 200, file) !=NULL)
   {
   	printf("\nEssas s�o informa�oes do usuario: ");
   	printf("%s", conteudo);
   	printf("\n\n");	
   }
    
    system("pause");
    
    
   }
   
    int deletar()
    {
    char cpf[40];
    
    printf("digite o CPF a ser deletado");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE*file;
    file = fopen(cpf,"r");
    
    if(file== NULL)
    {
    	printf("o usuario nao se encontra no sistema\n");
    	system("pause");
	}
	
	}
    
    
    
    int main()   
    {
	 int opcao=0; // definindo variaveis
	 int laco=1;
	 for(laco=1;laco==1;)
   {
      system("cls");
}
    setlocale(LC_ALL, "Portuguese");// definindo linguagem
   
    printf("### Cart�rio da EBAC ###\n\n");
    printf("Escolha a op��o desejada no menu:\n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n\n");
    printf("\t4-  Sair do sistema\n\n");
    printf("op��o: ");//fim do menu
    
    scanf("%d",&opcao); // armazenando a escolha do usuario
    
    system("cls"); // limpar a tela
    
    switch(opcao) // inicio da sele��o
    {
    	case 1:
    registro(); // chamada de funcoes
    	break;
    	
    	case 2:
    	consulta();
        break;
        
        case 3:
         deletar();
        break;
        
        case 4:
        printf("Obrigado por utulizar o sistema!\n");
        return 0;
        break;
        
        default:
        printf("Essa opcao n�o esta disponivel!\n");
        system("pause");
    	break;
	}// fim da sele��o
	
	
