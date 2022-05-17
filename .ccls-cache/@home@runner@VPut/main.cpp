/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira, TIA: 32195621.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

Referências Bibliográficas:

*/

#include <iostream>
#include "LDL.h"
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
  string fname = "df_covid.csv";
 
	vector<vector<string>> content;
	vector<string> row;
	string line, word;
 
	fstream file (fname, ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		cout<<"Could not open the file\n";
 
	for(int i=0;i<content.size();i++)
	{
		for(int j=0;j<content[i].size();j++)
		{
			cout<<content[i][j]<<" ";
		}
		cout<<"\n";
	}
}