#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	FILE *p_file;
	char diretorio[50] = "C:\\Users\\Leonardo\\Desktop\\Atividade\\teste.txt";
	char  conteudo[100];
	

	p_file = fopen(diretorio, "rb");
	
	if(p_file == NULL)
	{
		cout<<"Erro, impossivel abrir o arquivo"<<endl;
	}
	
	else
	{
		fread(&conteudo, sizeof(char), sizeof(conteudo), p_file);
		cout<<conteudo;
		fclose(p_file);
	}
	
}
