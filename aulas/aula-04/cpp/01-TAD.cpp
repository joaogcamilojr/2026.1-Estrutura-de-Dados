#include <iostream>
using namespace std;

void imprimir(int dados[], int tamanho) {
    cout << "[";
    for (int i = 0; i < tamanho; i++) {
        cout << dados[i];
        if (i < tamanho - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void adicionar(int dados[], int &tamanho, int capacidade, int x) {
    if (tamanho >= capacidade) return;
    dados[tamanho] = x;
    tamanho++;
}

void inserirNoInicio(int dados[], int &tamanho, int capacidade, int x) {
    if (tamanho >= capacidade) return;
    for (int i = tamanho; i > 0; i--) {
        dados[i] = dados[i - 1];
    }
    dados[0] = x;
    tamanho++;
}

void inserirNoMeio(int dados[], int &tamanho, int capacidade, int pos, int x) {
    if (pos < 0 || pos > tamanho || tamanho >= capacidade) return;
    for (int i = tamanho; i > pos; i--) {
        dados[i] = dados[i - 1];
    }
    dados[pos] = x;
    tamanho++;
}

void remover(int dados[], int &tamanho, int indice) {
    if (indice < 0 || indice >= tamanho) return;
    for (int i = indice; i < tamanho - 1; i++) {
        dados[i] = dados[i + 1];
    }
    tamanho--;
}

int buscar(int dados[], int tamanho, int indice) {
    if (indice < 0 || indice >= tamanho) return -1;
    return dados[indice];
}

void inserirEm(int dados[], int &tamanho, int capacidade, int x, int indice) {
    if (indice < 0 || indice > tamanho || tamanho >= capacidade) return;
    for (int i = tamanho; i > indice; i--) {
        dados[i] = dados[i - 1];
    }
    dados[indice] = x;
    tamanho++;
}

int main() {
    int dados[10] = {10, 20, 30};
    int capacidade = 10;
    int tamanho = 3;

    imprimir(dados, tamanho);

    adicionar(dados, tamanho, capacidade, 40);
    imprimir(dados, tamanho);

    remover(dados, tamanho, 2);
    imprimir(dados, tamanho);

    inserirEm(dados, tamanho, capacidade, 60, 1);
    imprimir(dados, tamanho);

    return 0;
}
