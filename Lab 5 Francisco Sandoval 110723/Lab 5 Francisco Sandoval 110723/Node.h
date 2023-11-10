#pragma once

generic <typename T>
ref class Node
{
public:
	T value;
	Node<T>^ next;
	Node<T>^ prev;
	Node<T>^ temp;
	Node<T>^ end;

	Node(T _value) {
		value = _value;
		next = nullptr;
		prev = nullptr;
	}

};