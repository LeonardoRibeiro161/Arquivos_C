#include<iostream>
#include<stdlib.h>
#include<stdio.h>

//O programa deverá permitir a leitura de qualquer arquivo texto e imprimir o número de linhas que contém o arquivo.

using namespace std;

int main()
{
	FILE * p_file;
	char diretorio[80] = "C:\\Users\\leonardo.ribeiro-nub\\Desktop\\teste.txt";
	char conteudo;
	char vogais[] = {'a','e','i', 'o','u'};
	char consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h' ,'j' ,'k', 'l' ,'m', 'n' ,'p' ,'q','r' ,'s' ,'t', 'v', 'w' ,'x' ,'z'};
	int cont_vogal = 0, cont_consoante = 0,i = 0;
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
			for(i = 0; i < 5; i++)
			{
				if(vogais[i] == conteudo)
				{
					cont_vogal++;
				}	
			}
			for(i = 0; i < 20; i++)
			{
				if(consoantes[i] == conteudo)
				{
					cont_consoante++;
				}
				
			}
		}
		
		cout<<"\nNumero de vogais:"<<cont_vogal<<endl;
		cout<<"\nNumero de consoantes:"<<cont_consoante<<endl;
		
	
		fclose(p_file);
	}
			
}
