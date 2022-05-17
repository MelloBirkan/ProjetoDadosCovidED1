/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira, TIA: 32195621.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

Referências Bibliográficas:

*/

#ifndef ____LDL____
#define ____LDL____

#include "No.h"
// Classe de Lista Duplamente Encadeada
class LDL{
	private:
		No *cabeca;
		int qtde;
	public:
		LDL();
		~LDL() {};// Exerc�cio
		void setCabeca(No *cabeca){ this->cabeca = cabeca;	};
		No *getCabeca(){ return cabeca; };
		int getQtde(){ return qtde;	};
		void setQtde(int qtde) { this->qtde =  qtde; };
		bool isEmpty();	
    bool isEmptyLista(No *cabeca);	
		bool isFull();
		bool remove(int chave);
    bool atualiza(int chave, Elemento dado);
		bool insereOrdemCrescente(int chave, Elemento dado);
		void mostraOrdemCrescente();
		void mostraOrdemDecrescente();
		No *busca(int chave);
    
};

#endif
