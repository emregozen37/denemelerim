#include <stdio.h>
#include "linkedListNode.h"

bool SortedLinkedList::find(int x) {
	LinkedListNode* current = head;
	while (current != nullptr){
		if (current->value == x) {
			return true;
		}
		current = current->next;
	}
	return false;
}

void SortedLinkedList::printList() {
	LinkedListNode* current = head;
	while (current != nullptr) {
		printf("%d -> ", current->value);
		current = current->next;
	}
	printf("nullptr\n");
}

void SortedLinkedList::add(int x) {
	LinkedListNode* newNode = new LinkedListNode();
	newNode->value = x;
	newNode->next = nullptr;
	if (head == nullptr || head->value >= x) {
		newNode->next = head;
		head = newNode;
		return;
	}
	LinkedListNode* current = head;
	while (current->next != nullptr && current->next->value < x) {
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;
}

void SortedLinkedList::remove(int x) {
	if (head == nullptr) {
		return;
	}
	if (head->value == x) {
		LinkedListNode* temp = head;
		head = head->next;
		delete temp;
		return;
	}
	LinkedListNode* current = head;
	while (current->next != nullptr && current->next->value < x) {
		current = current->next;
	}
	if (current->next != nullptr && current->next->value == x) {
		LinkedListNode* temp = current->next;
		current->next = current->next->next;
		delete temp;
	}
}