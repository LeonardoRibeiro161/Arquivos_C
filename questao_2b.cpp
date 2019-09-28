#include<stdlib.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	
	FILE *p_file;
	char conteudo[100];
	char aux[100];
	char diretorio[80] = "C:\\Users\\Leonardo\\Desktop\\AlunosFap2019.txt";
	int i;
	p_file = fopen(diretorio, "rb");
	
	if(p_file == NULL)
	{
		cout<<"Erro ao abrir arquivo"<<endl;
	}
	else
	{
		cout<<"Arquivo "<<diretorio<<" encontrado com sucesso"<<endl<<endl;
		cout<<"Conteudo criptogrado"<<endl;
		fread(&conteudo, sizeof(char), sizeof(conteudo), p_file);
		cout<<conteudo<<endl;
		cout<<"Conteudo descriptografado"<<endl;
		for(i = 0; i < strlen(conteudo);i++)
		{
			
			if(conteudo[i] == 'a')
			{
				aux[i] = 'z';
			}
			else if(conteudo[i] == ' ' || conteudo[i] == '\n')
			{
				aux[i] = NULL;
			}
			else
			{
				aux[i] = conteudo[i] -1;
			}
		}
		
		cout<<aux;
		
		fclose(p_file);
	}
}

