#include<stdlib.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	
	FILE *p_file;
	char conteudo[100];
	char diretorio[80] = "C:\\Users\\leonardo.ribeiro-nub\\Desktop\\teste.txt";
	
	p_file = fopen(diretorio, "r");
	
	if(p_file == NULL)
	{
		cout<<"Erro ao abrir arquivo"<<endl;
	}
	else
	{
		cout<<"Arquivo "<<diretorio<<" encontrado com sucesso"<<endl<<endl;
		cout<<"Conteudo criptogrado"<<endl;
		fread(&conteudo, sizeof(char), sizeof(conteudo), p_file);
		cout<<conteudo;
		fclose(p_file);
	}
}
