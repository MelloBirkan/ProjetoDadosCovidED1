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

void imprimirCaso1(int *numerosCaso1){

  cout << "\n\n--- Caso 1 ---\n";

  cout << "\n\n>> Mulheres <<";
  
  //Mulher, intubado e veio a óbto
  cout << "\n\nNúmero de pacientes intubados que são do Sexo Feminino e vieram a óbto: " << numerosCaso1[0];

  //Mulher, intubado e não veio a óbto
  cout << "\n\nNúmero de pacientes intubados que são do Sexo Feminino e não vieram a óbto: " << numerosCaso1[1];

  //Mulher, não intubado e veio a óbto
  cout << "\n\nNúmero de pacientes não intubados que são do Sexo Feminino e vieram a óbto: " << numerosCaso1[2];

  //Mulher, não intubado e não veio a óbto
  cout << "\n\nNúmero de pacientes não intubados que são do Sexo Feminino e não vieram a óbto: " << numerosCaso1[3];

  //Mulher e intubação não aplicável
  cout << "\n\nNúmero de pacientes do Sexo Feminino cujo o dado intubação é 'Não aplicável'/'Não Disponível': " << numerosCaso1[4];

  cout << "\n\n>> Homens <<";

  //Homem, intubado e veio a óbto
  cout << "\n\nNúmero de pacientes intubados que são do Sexo Masculino e vieram a óbto: " << numerosCaso1[5];

  //Homem, intubado e veio a óbto
  cout << "\n\nNúmero de pacientes intubados que são do Sexo Masculino e não vieram a óbto: " << numerosCaso1[6];

  //Homem, não intubado e veio a óbto
  cout << "\n\nNúmero de pacientes não intubados que são do Sexo Masculino e vieram a óbto: " << numerosCaso1[7];

  //Homem, não intubado e não veio a óbto
  cout << "\n\nNúmero de pacientes não intubados que são do Sexo Masculino e não vieram a óbto: " << numerosCaso1[8];

  //Homem e intubação não aplicável
  cout << "\n\nNúmero de pacientes do Sexo Masculino cujo o dado intubação é 'Não aplicável'/'Não Disponível': " << numerosCaso1[9];
}

void imprimirCaso3(int *numerosCaso3){

  cout << "\n\n--- Caso 3 ---\n";

  cout << "\n\n>> Mulheres <<";
  
  //Teste Covid positivo e foi para a UCI
  cout << "\n\nNúmero de pacientes fumantes que são do Sexo Feminino e vieram a óbto: " << numerosCaso3[0];

  //Teste Covid positivo e não foi para a UCI
  cout << "\n\nNúmero de pacientes fumantes que são do Sexo Feminino e não vieram a óbto: " << numerosCaso3[1];

  cout << "\n\n>> Homens <<";

  //Teste Covid negativo e foi para a UCI
  cout << "\n\nNúmero de pacientes fumantes que são do Sexo Masculino e vieram a óbto: " << numerosCaso3[2];

  //Teste Covid negativo e não foi para a UCI
  cout << "\n\nNúmero de pacientes fumantes que são do Sexo Masculino e não vieram a óbto: " << numerosCaso3[3];
}

void imprimirCaso4(int *numerosCaso4){

  cout << "\n\n--- Caso 4 ---\n";
  
  //Teste Covid positivo e foi para a UCI
  cout << "\n\nNúmero de pacientes cujo o Teste de Covid deu positivo e foram internados na UCI: " << numerosCaso4[0];

  //Teste Covid positivo e não foi para a UCI
  cout << "\n\nNúmero de pacientes cujo o Teste de Covid deu positivo, mas não foram internados na UCI: " << numerosCaso4[1];

  //Teste Covid negativo e foi para a UCI
  cout << "\n\nNúmero de pacientes cujo o Teste de Covid deu negativo, mas foram internados na UCI: " << numerosCaso4[2];

  //Teste Covid negativo e não foi para a UCI
  cout << "\n\nNúmero de pacientes cujo o Teste de Covid deu negativo e não foram internados na UCI: " << numerosCaso4[3];

  //Não aplicável ou disponível para qualquer um dos casos
  cout << "\n\nNúmero de pacientes cujo o dado Teste de Covid ou Internação na UCI é 'Não aplicável'/'Não Disponível': " << numerosCaso4[4];

  cout << "\n";
}

void imprimirCaso5(int *numerosCaso5){

  cout << "\n\n--- Caso 5 ---\n";
  
  //Teste Covid positivo e foi para a UCI
  cout << "\n\nNúmero de pacientes com Obsidade: " << numerosCaso5[0];

  //Teste Covid positivo e não foi para a UCI
  cout << "\n\nNúmero de pacientes com Diabetes: " << numerosCaso5[1];

  //Teste Covid negativo e foi para a UCI
  cout << "\n\nNúmero de pacientes com Doenças Cardiacas: " << numerosCaso5[2];

  //Teste Covid negativo e não foi para a UCI
  cout << "\n\nNúmero de pacientes com Asma: " << numerosCaso5[3];

  //Não aplicável ou disponível para qualquer um dos casos
  cout << "\n\nNúmero de pacientes com Hipertensão: " << numerosCaso5[4];

  cout << "\n";
}

void lerDados(LDL *lista){
  string fname = "df_covid.csv";
	string line, word;
 
	fstream file (fname, ios::in);
  
	if(file.is_open()){
    cout << "\n > Lendo os dados. Por favor, aguarde...\n";
    
		while(getline(file, line)){
      int dadosPaciente[1][12], i = 0;
			stringstream str(line);
 
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
}

void caso1(Paciente paciente, int *numerosCaso1){

  //Mulher
  if (paciente.getSexo() == 1){
    if ((paciente.getIntubado() == 1) && (paciente.getObito() == 1)){
      //Foi intubado e veio a óbtito
      numerosCaso1[0] = numerosCaso1[0] + 1;
    } else if ((paciente.getIntubado() == 1) && (paciente.getObito() == 2)){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[1] = numerosCaso1[1] + 1;
    } else if ((paciente.getIntubado() == 2) && (paciente.getObito() == 1)){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[2] = numerosCaso1[2] + 1;
    } else if ((paciente.getIntubado() == 2) && (paciente.getObito() == 2)){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[3] = numerosCaso1[3] + 1;
    } else if ((paciente.getIntubado() > 2))){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[4] = numerosCaso1[4] + 1;
    }
  } else{ //Homem
    if ((paciente.getIntubado() == 1) && (paciente.getObito() == 1)){
      //Foi intubado e veio a óbtito
      numerosCaso1[5] = numerosCaso1[5] + 1;
    } else if ((paciente.getIntubado() == 1) && (paciente.getObito() == 2)){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[6] = numerosCaso1[6] + 1;
    } else if ((paciente.getIntubado() == 2) && (paciente.getObito() == 1)){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[7] = numerosCaso1[7] + 1;
    } else if ((paciente.getIntubado() == 2) && (paciente.getObito() == 2)){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[8] = numerosCaso1[8] + 1;
    } else if ((paciente.getIntubado() > 2))){
      //Foi intubado, mas não veio a óbtito
      numerosCaso1[9] = numerosCaso1[9] + 1;
    }
  }
}

void caso3(Paciente paciente, int *numerosCaso3){

  //É Fumante
  if (paciente.getFumante() == 1){
    if ((paciente.getSexo() == 1) && (paciente.getObito() == 1)){
      //Mulher e foi a óbtito
      numerosCaso3[0] = numerosCaso3[0] + 1;
    } else if ((paciente.getSexo() == 1) && (paciente.getObito() == 0)){
      //Mulher e não foi a óbtito
      numerosCaso3[1] = numerosCaso3[1] + 1;
    } else if ((paciente.getSexo() == 2) && (paciente.getObito() == 1)){
      //Homem e foi a óbtito
      numerosCaso3[2] = numerosCaso3[2] + 1;
    } else{
      //Homem e não foi a óbtito
      numerosCaso3[3] = numerosCaso3[3] + 1;
    }
  }
}

void caso4(Paciente paciente, int *numerosCaso4){
  
  if ((paciente.getTesteCovid() == 1) && (paciente.getIcu() == 1)){
    //Teste Covid positivo e foi para a UCI
    numerosCaso4[0] = numerosCaso4[0] + 1;
  } else if ((paciente.getTesteCovid() == 1) && (paciente.getIcu() == 2)){
    //Teste Covid positivo e não foi para a UCI
    numerosCaso4[1] = numerosCaso4[1] + 1;
  } else if ((paciente.getTesteCovid() == 2) && (paciente.getIcu() == 1)){
    //Teste Covid negativo e foi para a UCI
    numerosCaso4[2] = numerosCaso4[2] + 1;
  } else if ((paciente.getTesteCovid() == 2) && (paciente.getIcu() == 2)){
    //Teste Covid negativo e não foi para a UCI
    numerosCaso4[3] = numerosCaso4[3] + 1;
  } else{
    //Não aplicável ou disponível para qualquer um dos casos
    numerosCaso4[4] = numerosCaso4[4] + 1;
  }
}

void caso5(Paciente paciente, int *numerosCaso5){
  
  if ((paciente.getObesidade() == 1)){
    //Paciente com Obsidade
    numerosCaso5[0] = numerosCaso5[0] + 1;
  }
  if ((paciente.getDiabetes() == 1)){
    //Paciente com Diabetes
    numerosCaso5[1] = numerosCaso5[1] + 1;
  }
  if ((paciente.getCardiovascular() == 1)){
    //Paciente com Doenças Cardiovasculares
    numerosCaso5[2] = numerosCaso5[2] + 1;
  }
  if ((paciente.getAsma() == 1)){
    //Paciente com Asma
    numerosCaso5[3] = numerosCaso5[3] + 1;
  }
  if ((paciente.getHipertensao() == 1)){
    //Paciente com Hipertensão
    numerosCaso5[4] = numerosCaso5[4] + 1;
  }
}

void analisarCasos(LDL *lista, int *numerosCaso1, int *numerosCaso3, int *numerosCaso4, int *numerosCaso5){
  
  if (lista->getCabeca() == nullptr){
    cout << "Lista vazia!" << endl;
  } else{
		cout << "\n > Analisando os dados. Por favor, aguarde...\n";
    
		No *pAnda = lista->getCabeca();
    Paciente paciente;
    
		while (pAnda->getProx() != lista->getCabeca()){
      
      paciente = pAnda->getDado();

      //Caso 1
      caso1(paciente, numerosCaso1);

      //Caso 3
      caso3(paciente, numerosCaso3);
      
      //Caso 4
      caso4(paciente, numerosCaso4);

      //Caso 5
      caso5(paciente, numerosCaso5);
      
			pAnda= pAnda->getProx();
		}
    
    paciente = pAnda->getDado();

    //Caso 1
    caso1(paciente, numerosCaso1);

    //Caso 3
    caso3(paciente, numerosCaso3);
    
    //Caso 4
    caso4(paciente, numerosCaso4);

    //Caso 5
    caso5(paciente, numerosCaso5);

	}
}

int main(){
  LDL *lista = new LDL();
  int numerosCaso1[10] = {0}, numerosCaso3[4] = {0}, numerosCaso4[5] = {0}, numerosCaso5[5] = {0};

  setlocale( LC_ALL, "" ); //Define os caracteres de saída para o UTF-8
  
  lerDados(lista);

  analisarCasos(lista, numerosCaso1, numerosCaso3, numerosCaso4, numerosCaso5);

  //Caso 1
  imprimirCaso1(numerosCaso1);

  //Caso 3
  imprimirCaso3(numerosCaso3);
  
  //Caso 4
	imprimirCaso4(numerosCaso4);

  //Caso 5
	imprimirCaso5(numerosCaso5);

  // Faz uma pausa antes de finalizar o programa
	cout << endl << endl;
	system("pause");
	return 0;
}