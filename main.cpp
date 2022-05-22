/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira, TIA: 32195621.
Nome: Gabriel Montes Chagas. TIA: 32162243.
Nome: Guilherme Picoli Rodrigues. TIA: 32147317.
Nome: Leonardo Henrique de Oliveira Matos. TIA: 32139561.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

Referências Bibliográficas:

*/

#include <iostream>
#include "LDL.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void lerDados(LDL *lista){
  string fname = "df_covid.csv";
	string line, word;
 
	fstream file (fname, ios::in);
  
	if(file.is_open()){
    cout << "\nLendo os dados. Por favor, aguarde...\n";
    
		while(getline(file, line)){
      int dadosPaciente[1][12], i = 0;
			stringstream str(line);

      //getline(str, word, ';');

      //dadosPaciente[0][0] = i+1;
 
			while(getline(str, word, ';')){
        //int num = stoi(word);
        //cout << "\nWord: " << num;
        dadosPaciente[0][i] = stoi(word);
        i = i+1;
      }

      //No *novoNo = new No();
      Paciente *novoPaciente = new Paciente(dadosPaciente[0][0], dadosPaciente[0][1], dadosPaciente[0][2], dadosPaciente[0][3], dadosPaciente[0][4], dadosPaciente[0][5], dadosPaciente[0][6], dadosPaciente[0][7], dadosPaciente[0][8], dadosPaciente[0][9], dadosPaciente[0][10], dadosPaciente[0][11]);

      lista -> insereOrdemCrescente(dadosPaciente[0][0], novoPaciente);
		}
	}
	else{
    cout << "\n*** ERRO AO LER OS DADOS! Por favor, verifique o arquivo de leitura ***\n";
  }
 
	/*for(int i=0;i<content.size();i++)
	{
		for(int j=0;j<content[i].size();j++)
		{
			cout<<content[i][j]<<" ";
		}
		cout<<"\n";
	}*/
}

int main(){
  LDL *lista = new LDL();

  setlocale( LC_ALL, "" ); //Define os caracteres de saída para o UTF-8
  
  lerDados(lista);

  //Testando a se a lista está correta
  lista -> mostraOrdemCrescente();

  // Faz uma pausa antes de finalizar o programa
	cout << endl << endl;
	system("pause");
	return 0;
}