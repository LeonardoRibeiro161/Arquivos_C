#include<iostream>
#include<stdlib.h>
#include<stdio.h>
//O programa dever� permitir a leitura de qualquer arquivo texto e imprimir o n�mero de linhas que cont�m o arquivo.

using namespace std;

int main()
{
	FILE * p_file;
	char diretorio[80] = "C:\\Users\\Leonardo\\Desktop\\Atividade\\AlunosFap2019.txt";
	char conteudo;
	int num = 0;
	p_file = fopen(diretorio, "r");
	
	if(p_file  == NULL)
	{
		cout<<"ERRO, nao foi possivel abrir o arquivo..."<<endl;
	}
	else
	{
		cout<<"-> Abrindo arquivo em: "<<diretorio<<endl;
		while((conteudo = fgetc(p_file)) != EOF)
		{
			if(conteudo == '\n');
			num++;
		}
		
		cout<<"Numero de linhas:"<<num<<endl;
		fclose(p_file);
	}
	
	
		
}
