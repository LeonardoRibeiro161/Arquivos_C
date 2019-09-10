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
	char vogal[5]= {'a', 'e', 'i', 'o', 'u'};
	int num = 0, cont_vogal = 0, cont_consoante = 0,i = 0;
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
			if(vogal[i] == conteudo)
			{
				cont_vogal += 1;
				cout<<vogal[i];
			}
			else if(vogal[i] != conteudo && vogal[i] != '\n')
			{
				cont_consoante+=1;
				
			}
			i++;
		}
		
		cout<<"\nNumero de vogais:"<<cont_vogal<<endl;
		cout<<"\nNumero de consoantes:"<<cont_consoante<<endl;
		
	
		fclose(p_file);
	}
	
	
		
}
