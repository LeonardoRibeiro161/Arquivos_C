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
	char diretorio[80]  = "C:\\Users\\leonardo.ribeiro-nub\\Desktop\\AlunosFap2019.txt";
	p_file = fopen(diretorio,"wb");
	char conteudo[50];
	int  tamanho;
	
	cout<<"Informe o texto a ser  cifrado:";
	fgets(conteudo, 50, stdin);
	tamanho = strlen(conteudo);
	if(p_file == NULL)
	{
		cout<<"Erro ao abrir arquivo..."<<endl;
	}
	else
	{
		for(int i = 0; i < tamanho;i++)
		{
			if(conteudo[i] == 'z')
				conteudo[i] = 'a';
			else
				if(conteudo[i] == ' ' || conteudo[i] == '\n')
					cout<<char(conteudo[i]);
				else
					cout<<char(conteudo[i] + 3);
					fputc(char(conteudo[i] + 3), p_file);
			}
		}
		
	}
	
		

