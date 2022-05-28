/*
ESTRUTURA DE DADOS I [Turma 03O11]

Atividade de Aplicação 2 - Introdução a Data Science com Estruturas de Dados I.

Nome: Caio Sampaio Oliveira. TIA: 32195621.
Nome: Gabriel Montes Chagas. TIA: 32162243.
Nome: Guilherme Picoli Rodrigues. TIA: 32147317.
Nome: Leonardo Henrique de Oliveira Matos. TIA: 32139561.
Nome: Marcello Gonzatto Birkan. TIA: 42020034.

Referências Bibliográficas:

SZWARCFITER, J.L.; MARKENZON, L. Estruturas de Dados e seus Algoritmos, 3ª Ed. Rio de Janeiro: LTC, 2010.

ÜNAL, Yavuz; DUDAK, Muhammed Nuri. Classification of Covid-19 Dataset with Some Machine Learning Methods. Journal of Amasya University the Institute of Sciences and Technology, Turquia, v. 1, n. 1, p. 30-37, jul. de 2020. Disponível em: <https://dergipark.org.tr/en/pub/jauist/issue/55760/748667>. Acesso em: 07 de Maio de 2022.
*/

#include <iostream>
#include "No.h"
#include "LDL.h"

// Construtor vazio
// inicia o cabeça da lista como null
LDL::LDL(){
	this->cabeca = nullptr;
	this->qtde = 0;
}

bool LDL::isEmpty() { // Verifica se lDL está vazia
	if (this->cabeca == nullptr) {
		return true; 
	} else {
	    return false;	
	};  
}

bool LDL::isEmptyLista(No *cabeca) {
	if (cabeca == nullptr) {
		return true; 
	} else {
	    return false;	
	};  
}


bool LDL::isFull(){ // verifica se alista está cheia
	No *aux = new No();
	
	if (aux == nullptr) return true;

	aux = nullptr;
	return false;
};

// Percorre a lDL em ordem crescente 
// e mostra os seus valores
void LDL::mostraOrdemCrescente(){
	// Percorre a lista e imprime os valores
	// em ordem Crescente
	if (cabeca == nullptr) cout << "Lista vazia!" << endl;
	else{
		cout << "Lista: [ ";
    
		No *pAnda = this->cabeca;
    Paciente paciente;
    
		while (pAnda->getProx() != this->cabeca){
      
      paciente = pAnda->getDado();
      
			cout << "Chave: " << pAnda->getChave() << ", ID do Paciente: " << paciente.getId() << " | ";
      
			pAnda= pAnda->getProx();
		}
    
    paciente = pAnda->getDado();
    
		cout << "Chave: " << pAnda->getChave() << ", ID do Paciente: " << paciente.getId() << " ]";
	}
}


// Percorre a lDL em ordem decrescente e mostra os seus valores
void LDL::mostraOrdemDecrescente(){
	// Percorre a lista e imprime os valores
	// em ordem decrescente
	if (cabeca == nullptr) cout << "Lista vazia!" << endl;
	else{
    
		cout << "Lista: [ ";
    
		No *pAnda = this->cabeca;
    Paciente paciente;
    
		while (pAnda->getAnt() != this->cabeca){
			pAnda= pAnda->getAnt();
      paciente = pAnda->getDado();
      
			cout << "Chave: " << pAnda->getChave() << ", ID do Paciente: " << paciente.getId() << " | ";
		}
    
    paciente = pAnda->getAnt()->getDado();
    
		cout << "Chave: " << pAnda->getAnt()->getChave() << ", ID do Paciente: " << paciente.getId() << "]";
	}
}

// Insere um novo elemento na LDL na ordem
// crescente
bool LDL::insereOrdemCrescente(int chave, Paciente *dado){
	// Cria um novo no
	No *novoNo = new No(chave, dado, nullptr, nullptr);
	
	if (isFull()) return false;

	// se lista vazia, insere o nó no ponteiro cabeça
	// e faz o nó apontar para ele mesmo
	if (cabeca == nullptr) {
		this->cabeca = novoNo;
		novoNo->setProx(novoNo);
		novoNo->setAnt(novoNo);
	} else { 
	    // Caso contrário, procura posição de inserção
	    // na ordem crescente de valores
		No *pAnda = this->cabeca, *pAnt = nullptr;
		while (pAnda->getProx() != cabeca && pAnda->getChave() < chave){
				pAnt = pAnda;
				pAnda = pAnda->getProx();
		}	
		// Se não andou na lista e a chave que pAnda aponta
	    // É maior que a chave a ser inserida, significa que a chave
		// a ser inserida antes do cabeça
		// e cabeça precisa ser redefinido
		if (pAnt == nullptr && pAnda->getChave() > chave){
			novoNo->setAnt(this->cabeca->getAnt());
			this->cabeca->getAnt()->setProx(novoNo);
			this->cabeca->setAnt(novoNo);
			novoNo->setProx(this->cabeca);
			this->cabeca = novoNo;
		} else {
			// Caso pAnda tenha caminhado na lista e
			// a chave que o pAnda aponta maior do que a chave a ser inserido
			// insere o nó depois do ponteiro anterior pAnt
		 	if (pAnda->getChave() > chave && pAnt != nullptr) {	 
				pAnt->getProx()->setAnt(novoNo);
				novoNo->setProx(pAnda);
				pAnt->setProx(novoNo);
				novoNo->setAnt(pAnt);
			} else {// insere a chave depois do pAnda
		    	pAnda->getProx()->setAnt(novoNo);
				novoNo->setProx(pAnda->getProx());
				pAnda->setProx(novoNo);
				novoNo->setAnt(pAnda);
			}
		}
	}
	this->qtde++;
	return true;
}

No* LDL::busca(int chave) {
  if (isEmpty()) {
    return nullptr;
  } else {
    No *pAnda = cabeca;
    while (pAnda -> getChave() != chave && pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    if (pAnda -> getChave() == chave) {
      return pAnda;
    } else {
      return nullptr;
    }
    } 
}

bool LDL::atualiza(int chave, Paciente *dado) {
  if (isEmpty()) {
    return false;
  } else {
    
  No *pAnda = cabeca;
  while (pAnda -> getChave() != chave && pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    if (pAnda -> getChave() == chave) {
      pAnda -> setDado(dado);
      return true;
    } else {
      return false;
    }
  }
}

bool LDL::remove(int chave) {
  if (isEmpty()) {
    return false;
  } else {

    No *pAnda = cabeca;
  while (pAnda -> getChave() != chave && pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    if (pAnda -> getChave() == chave) {
      if (cabeca == pAnda) {
        pAnda -> getAnt() -> setProx(pAnda -> getProx());
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
        cabeca = pAnda -> getProx();
      } else if (pAnda != cabeca) {
        pAnda -> getAnt() -> setProx(pAnda -> getProx());
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
        // Ultimo da lista
      } else if (pAnda -> getProx() == cabeca) {
        pAnda -> getAnt() -> setProx(cabeca);
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
      }
      delete pAnda;
      pAnda = nullptr;
      qtde--;
      return true;
    } else {
      return false;
    }
  }
}