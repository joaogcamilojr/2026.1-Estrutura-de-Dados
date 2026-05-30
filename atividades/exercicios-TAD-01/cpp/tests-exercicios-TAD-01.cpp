#include <iostream>
using namespace std;

bool arraysIguais(const int a[], const int b[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void inserirNoMeio(int lista[], int &tamanho, int pos, int valor) {
    for (int i = tamanho; i > pos; i--) {
        lista[i] = lista[i - 1];
    }
    lista[pos] = valor;
    tamanho++;
}

void inserirNoInicio(int lista[], int &tamanho, int valor) {
    for (int i = tamanho; i > 0; i--) {
        lista[i] = lista[i - 1];
    }
    lista[0] = valor;
    tamanho++;
}

void removerPosicao(int lista[], int &tamanho, int pos) {
    for (int i = pos; i < tamanho - 1; i++) {
        lista[i] = lista[i + 1];
    }
    tamanho--;
}

void inserirOrdenado(int lista[], int &tamanho, int valor) {
    int i = tamanho - 1;
    while (i >= 0 && lista[i] > valor) {
        lista[i + 1] = lista[i];
        i--;
    }
    lista[i + 1] = valor;
    tamanho++;
}

int buscarElemento(int lista[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == valor) {
            return i;
        }
    }
    return -1;
}

void testarExercicio1() {
    int lista[10] = {10, 20, 30, 40};
    int tamanho = 4;
    int pos = 2;
    int valor = 25;

    inserirNoMeio(lista, tamanho, pos, valor);

    cout << "1 - ";
    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}

void testarExercicio2() {
    int lista[10] = {10, 20, 30};
    int tamanho = 3;
    int valor = 5;

    inserirNoInicio(lista, tamanho, valor);

    cout << "2 - ";
    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}

void testarExercicio3() {
    int lista[10] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    int pos = 2;

    removerPosicao(lista, tamanho, pos);

    cout << "3 - ";
    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}

void testarExercicio4() {
    int lista[10] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    cout << "4 - encontrado na posicao: " << buscarElemento(lista, tamanho, 30) << endl;
    cout << "4 - nao encontrado, retorno: " << buscarElemento(lista, tamanho, 35) << endl;
}

void testarExercicio5() {
    int lista[10] = {10, 20, 30, 40};
    int tamanho = 4;
    int valor = 25;

    inserirOrdenado(lista, tamanho, valor);

    cout << "5 - ";
    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}

int main() {
    testarExercicio1();
    testarExercicio2();
    testarExercicio3();
    testarExercicio4();
    testarExercicio5();

    cout << "Todos os testes passaram!" << endl;
    return 0;
}

