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
	char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char diretorio[80] = "C:\\Users\\leonardo.ribeiro-nub\\Desktop\\teste.txt";
	int i,w,z;
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
		cout<<conteudo<<endl;
		
		for(int i  = 0; i < strlen(conteudo); i++)
		{
			w = 0; 
			while(conteudo[i] != letras[w])
			{
				w++;
			}
			conteudo[i] = w;
		}

		for(i = 1; i <= 26; i++)
		{
			for(z = 0; z < strlen(conteudo); z++ )
			{
				w = conteudo[z] + i;
				if(w >= 26)
				{
					w -= 26;
				}
				if(letras[i] == 'b','o','l','a')
				{
					cout<<letras[w];
				}		
			}
			cout<<endl;
			
		}
	
		
		
		
		fclose(p_file);
	}
}


