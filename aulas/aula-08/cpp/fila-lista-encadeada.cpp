#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

bool isEmpty() {
    return front == NULL;
}

void enqueue(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue() {
    if (isEmpty()) {
        cout << "Fila vazia!\n";
        return -1;
    }

    Node* temp = front;
    int val = temp->data;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
    return val;
}

void display() {
    Node* temp = front;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
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