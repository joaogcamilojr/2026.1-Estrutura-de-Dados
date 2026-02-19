#include <iostream>
using namespace std;

int main() {
    int v[] = {10, 20, 30, 40, 50};
    int n = 5;
    int chave = 30;

    int i = 0;
    while (i < n && v[i] != chave)
        i++;

    if (i < n)
        cout << "Encontrado no indice " << i << "\n";
    else
        cout << "Nao encontrado\n";
    return 0;
}
