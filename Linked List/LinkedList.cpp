#include "iostream"
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input)
{
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if(tail==NULL)
	tail = head;
	
}

void LinkedList::insertToTail(int input)
{
	
	Node *newNode = new Node();
	newNode->value = input;
	
	if(tail==NULL)
	tail = newNode;
	
	tail->next = newNode;
	tail = newNode;
	
	if(head==NULL)
	head = tail;
	
}

void LinkedList::insertAfter(int input1, int input2)
{
	
	Node *newNode = new Node();
	newNode->value = input1;

	Node *tmp = head;
	while (tmp != NULL && tmp->value != input2)
	{
    	tmp = tmp->next;
	}
	
	if (tmp == NULL)
	{
		delete tmp;
		cout << "Node yang seharusnya berada sebelum node baru tidak ada";
	}
	
	newNode->next = tmp->next;
	tmp->next = newNode;
	
	if(tail->value == input2)
	tail = newNode;
	
}



void LinkedList::printAll(){
	
	
Node *tmp = head;
while (tmp != NULL)	{
	
	cout << tmp->value << " -> ";
	
	tmp = tmp->next;
	
}
	
	
}
