#include <iostream>
using namespace std;

#define MAX 5

int fila[MAX];
int front = 0;
int rear = 0;
int cnt = 0;

bool isEmpty() {
    return cnt == 0;
}

bool isFull() {
    return cnt == MAX;
}

void enqueue(int x) {
    if (isFull()) {
        cout << "Fila cheia!\n";
        return;
    }

    fila[rear] = x;
    rear = (rear + 1) % MAX;
    cnt++;
}

int dequeue() {
    if (isEmpty()) {
        cout << "Fila vazia!\n";
        return -1;
    }

    int val = fila[front];
    front = (front + 1) % MAX;
    cnt--;

    return val;
}

void display() {
    if (isEmpty()) {
        cout << "Fila vazia\n";
        return;
    }

    for (int i = 0; i < cnt; i++) {
        cout << fila[(front + i) % MAX] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    enqueue(40);
    enqueue(50);

    display();

    return 0;
}