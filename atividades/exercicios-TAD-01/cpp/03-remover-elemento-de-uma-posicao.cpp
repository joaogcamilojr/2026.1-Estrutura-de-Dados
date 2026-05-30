#include <iostream>
using namespace std;

int main() {
    int lista[10] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    int pos = 2;

    for (int i = pos; i < tamanho - 1; i++) {
        lista[i] = lista[i + 1];
    }

    tamanho--;

    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }

    return 0;
}