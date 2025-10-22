#pragma once
#include <stdlib.h>
struct LinkedListNode {
	int value;
	LinkedListNode* next;
};

class SortedLinkedList {
private:
	LinkedListNode* head;

public:
	SortedLinkedList() { head = nullptr; } // Constructor to initialize head to nullptr
	bool find(int x); // Function to find an element in the sorted linked list
	void printList(); // Liste elemanlar�n� yazd�rma fonksiyonu
	void add(int x); // Listeye eleman ekleme fonksiyonu
	void remove(int x); // Liste eleman�n� silme fonksiyonu
};