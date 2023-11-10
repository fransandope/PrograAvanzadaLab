#include "Pila.h"

void Pila::Push(String^ value) {
    Nodo^ newNode = gcnew Nodo(value);
    if (isEmpty()) {
        start = newNode;
    }
    else {
        newNode->next = start;
        start = newNode;
    }
    count++;
}

bool Pila::isEmpty() {
    return count == 0;
}

String^ Pila::Pop() {
    if (!isEmpty()) {
        Nodo^ temp = start;
        start = start->next;
        count--;
        return temp->dato;
    }
    return nullptr;
}

String^ Pila::Peek() {
    if (!isEmpty()) {
        return start->dato;
    }
    return nullptr;
}

void Pila::Clear() {
    while (!isEmpty()) {
        Pop(); // Llama a Pop repetidamente hasta que la pila esté vacía
    }
}

Pila^ Pila::Copiar() {
    Pila^ copia = gcnew Pila();

    Nodo^ temp = start;

    while (temp != nullptr) {
        copia->Push(temp->dato);
        temp = temp->next;
    }

    return copia;
}

void Pila::BubbleSort() {
    if (isEmpty()) {
        return; // No hay elementos para ordenar
    }

    Nodo^ top = start;
    Nodo^ com;

    while (top->next != nullptr) {
        com = top->next;

        while (com != nullptr) {
            if (top->dato->CompareTo(com->dato) > 0) {
                // Intercambia los valores de los nodos
                String^ t = top->dato;
                top->dato = com->dato;
                com->dato = t;
            }
            com = com->next;
        }

        top = top->next;
    }
}

String^ Pila::ElementAt(int index) {
    if (index >= this->count || index < 0) return nullptr;

    Nodo^ actual = start;
    while (index > 0) {
        actual = actual->next;
        index--;
    }

    return actual->dato;
}

int Pila::Count() {
    return count;
}