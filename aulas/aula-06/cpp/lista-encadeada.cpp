#include <iostream>
using namespace std;

struct Node {
    int dados;
    Node* proximo;
};

Node* inicio = NULL;

void inserirNoInicio(int valor) {
    Node* novoNode = new Node();
    novoNode->dados = valor;
    novoNode->proximo = inicio;
    inicio = novoNode;
}

void imprimirLista() {
    Node* atual = inicio;

    while (atual != NULL) {
        cout << atual->dados << " -> ";
        atual = atual->proximo;
    }

    cout << "NULL" << endl;
}

void inserirNoFinal(int valor) {
    Node* novoNode = new Node();
    novoNode->dados = valor;
    novoNode->proximo = NULL;

    if (inicio == NULL) {
        inicio = novoNode;
        return;
    }

    Node* atual = inicio;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }

    atual->proximo = novoNode;
}

void buscarElemento(int valor) {
    Node* atual = inicio;

    while (atual != NULL) {
                
    }
}

int main () {
    inserirNoInicio(10);
    inserirNoInicio(30);
    inserirNoInicio(40);

    imprimirLista();

    inserirNoFinal(5);

    imprimirLista();

    buscarElemento(40);
}
