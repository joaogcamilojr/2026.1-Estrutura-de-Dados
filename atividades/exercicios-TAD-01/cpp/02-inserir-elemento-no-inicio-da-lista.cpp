#include <iostream>
using namespace std;

int main() {
    int lista[10] = {10, 20, 30};
    int tamanho = 3;
    int valor = 5;

    for (int i = tamanho; i > 0; i--) {
        lista[i] = lista[i - 1];
    }

    lista[0] = valor;
    tamanho++;

    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }

    return 0;
}