#include<iostream>
#include<stdlib.h>
#include<stdio.h>
//O programa deverá permitir a leitura de qualquer arquivo texto e imprimir o número de linhas que contém o arquivo.

using namespace std;

int main()
{
	FILE * p_file;
	char diretorio[80] = "C:\\Users\\Leonardo\\Desktop\\Atividade\\AlunosFap2019.txt";
	char conteudo;
	char letra = '\n';
	int num = 0;
	p_file = fopen(diretorio, "r");
	
	if(p_file  == NULL)
	{
		cout<<"ERRO, nao foi possivel abrir o arquivo..."<<endl;
	}
	else
	{
		cout<<"-> Abrindo arquivo em: "<<diretorio<<endl;
		while(fread(&conteudo, sizeof(char), 1, p_file))
		{
			if(letra == conteudo)
			{
				num++;
			}
		}
		
		cout<<"Numero de linhas:"<<num+1<<endl;
		fclose(p_file);
	}
	
	
		
}
