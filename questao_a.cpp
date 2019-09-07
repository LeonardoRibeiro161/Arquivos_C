#include<iostream>
#include<stdio.h>
#include<stdlib.h>


/*
O programa deverá criar/abrir um arquivo texto com o nome de “AlunosFap2019.txt” 

*/
using namespace std;

int main()
{
	FILE *p_arq;
	
	char nomeArquivo[50] = "D:\AlunosFap2019.txt";
	
	p_arq = fopen(nomeArquivo, "a");
	
	fclose(p_arq);

	cout<<"Criando arquivo no caminho: "<< nomeArquivo;
	
}
