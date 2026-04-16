#include <iostream>
using namespace std;

#define MAX 5

int fila[MAX];
int front = 0;
int rear = -1;

bool isEmpty() {
    return front > rear;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(int x) {
    if (isFull()) {
        cout << "Fila cheia!\n";
        return;
    }
    fila[++rear] = x;
}

int dequeue() {
    if (isEmpty()) {
        cout << "Fila vazia!\n";
        return -1;
    }
    return fila[front++];
}

void display() {
    if (isEmpty()) {
        cout << "Fila vazia\n";
        return;
    }

    for (int i = front; i <= rear; i++) {
        cout << fila[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    cout << "Removido: " << dequeue() << endl;

    display();

    return 0;
}