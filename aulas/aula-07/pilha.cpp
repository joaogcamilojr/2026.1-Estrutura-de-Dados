#include <iostream>
using namespace std;

const int MAX = 5;

bool isEmpty(int top) {
    return top == -1;
}

bool isFull(int top) {
    return top == MAX - 1;
}

void push(int stack[], int &top, int value) {
    if (isFull(top)) {
        cout << "Erro: pilha cheia (overflow)" << endl;
        return;
    }

    top++;
    stack[top] = value;
}

void pop(int &top) {
    if (isEmpty(top)) {
        cout << "Erro: pilha vazia (underflow)" << endl;
        return;
    }

    top--;
}

int topElement(int stack[], int top) {
    if (isEmpty(top)) {
        cout << "Pilha vazia!" << endl;
        return -1;
    }

    return stack[top];
}

void print(int stack[], int top) {
    if (isEmpty(top)) {
        cout << "Pilha vazia" << endl;
        return;
    }

    cout << "Topo -> ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int stack[MAX];
    int top = -1;

    push(stack, top, 10);
    push(stack, top, 20);
    push(stack, top, 30);
    push(stack, top, 40);
    push(stack, top, 50);

    print(stack, top);

    push(stack, top, 60); // overflow


    cout << "Topo: " << topElement(stack, top) << endl;

    pop(top);
    print(stack, top);

    pop(top);
    pop(top);
    pop(top);
    pop(top); // underflow

    return 0;
}