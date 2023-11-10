#pragma once
#include "Nodo.h"
using namespace System;

ref class Pila
{
public:
	Nodo^ start;
	int count;

	Pila() {
		count = 0;
		start = nullptr;
	}

	void Push(String^ value); // Cambié el tipo de dato de int a String
	String^ Pop(); // Cambié el tipo de dato de int a String
	String^ Peek(); // Cambié el tipo de dato de int a String
	bool isEmpty();
	void Clear();
	Pila^ Copiar();
	int Count();
	void BubbleSort();
	String^ ElementAt(int index);

};