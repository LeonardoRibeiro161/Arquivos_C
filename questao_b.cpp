#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
/*
O programa deverá permitir gravar os seguintes dados no arquivo “AlunosFap2019.txt”: a matricula do aluno, o nome do aluno(a) e o sexo do aluno.
*/

 struct aluno
{
	char matricula[10];
	char nome[50];
	char sexo[0];
}Aluno;

int main()
{
	
	FILE *p_arq;
	char diretorio[50]  = "C:\\Users\\Leonardo\\Desktop\\AlunosFap2019.txt";
	
	cout<<"Informe o nome: ";
	cin>>Aluno.nome;
	cout<<"Informe a matricula:";
	cin>>Aluno.matricula;
	cout<<"Informe o sexo: M/F";
	cin>>Aluno.sexo;
	
	p_arq = fopen(diretorio, "a+");
	

	if(p_arq != NULL)
	{
		fprintf(p_arq,"\nNome do aluno:");
		fprintf(p_arq, Aluno.nome);
		fprintf(p_arq,"\n");
		fprintf(p_arq,"Matricula: ");
		fprintf(p_arq, Aluno.matricula);
		fprintf(p_arq,"\n");
		fprintf(p_arq,"Sexo: ");
		fprintf(p_arq, Aluno.sexo);
		fclose(p_arq);
		fprintf(p_arq,"\n");
	}
	cout<<"-> Registrado com sucesso em: "<<diretorio<<endl;
	
	return 0;
}
