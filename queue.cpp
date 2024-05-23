#include <iostream>
#include "queue.h"

using namespace std;

int queue[MAX];
int front = -1;
int rear = -1;

int czyPelna() {
    return (rear + 1) % MAX == front;
}

int czyPusta() {
    return front == -1;
}

void dodaj(int value) {
    if (czyPelna()) {
        cout << "Kolejka jest pelna" << endl;
        return;
    }
    if (czyPusta()) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    cout << value << " dodano do kolejki" << endl;
}

int usun() {
    if (czyPusta()) {
        cout << "Kolejka jest pusta" << endl;
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    return value;
}

int pierwszaWartosc() {
    if (czyPusta()) {
        cout << "Kolejka jest pusta" << endl;
        return -1;
    }
    return queue[front];
}