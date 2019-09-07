#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/*
O programa deverá permitir a exclusão de um determinado registro do arquivo “AlunosFap2019.txt” através da matricula.
*/

using namespace std;

int main()
{
	FILE *p_file;
	char diretorio[80]  = "C:\\Users\\Leonardo\\Desktop\\Atividade\\AlunosFap2019.txt";
	p_file = fopen(diretorio,"rb");
	char matricula[10];
	char conteudo[100];
	
	if(p_file == NULL)
	{
		cout<<"Erro ao abrir arquivo..."<<endl;
	}
	else
	{
		cout<<"Informe o nome da matricula:";
		cin>>matricula;
		
		//fread(&conteudo,sizeof(char), sizeof(conteudo), p_file);
		while(!feof(p_file))
		{
			fread(&conteudo,sizeof(char), sizeof(conteudo), p_file);
			if(strcmp(conteudo, matricula) == 0)
			{
				cout<<conteudo;
			}
			else
			{
				cout<<"Matricula nao encontrada";
			}
			
		}
	}
	
	
	
	
	
	
	
}
