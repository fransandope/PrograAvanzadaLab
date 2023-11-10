#pragma once
using namespace System;

ref class Nodo
{
public:
	Nodo(String^ dato) {
		this->dato = dato;
		next = nullptr;
	}

	String^ dato;
	Nodo^ next;
	Nodo^ previus;
};