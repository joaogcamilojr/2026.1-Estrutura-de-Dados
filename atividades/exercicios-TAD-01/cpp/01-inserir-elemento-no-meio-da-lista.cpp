#include <iostream>
using namespace std;

int main() {
    int lista[10] = {10, 20, 30, 40};
    int tamanho = 4;

    int pos = 2;
    int valor = 25;

    for (int i = tamanho; i > pos; i--) {
        lista[i] = lista[i - 1];
    }

    lista[pos] = valor;
    tamanho++;

    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }

    return 0;
}