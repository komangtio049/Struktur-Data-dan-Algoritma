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

void LinkedList::deleteToHead()
{
	if (head==NULL)
	return;
	
	if (head!=NULL)
	{
		Node *tmp = head;
		head = head->next;
		delete tmp;
	}
	
}

void LinkedList::deleteToTail()
{
	if (head==NULL)
	{
		return;
	}
	
	if (tail==head)
	{
		delete head;
		head = NULL;
		tail = NULL;
		return;
	}
	
	if (tail!=head)
	{	
		Node *tmp = head;
		while (tmp->next != tail)
		{
			tmp = tmp->next;
		}
		delete tail;
		tail = tmp;
		tail->next = NULL;
	}
}

void LinkedList::deleteByValue(int input1)
{
	Node* tmpdel = NULL;
	Node* tmp = head;

	while (tmp != NULL && tmp->value != input1)
	{
		tmpdel = tmp;
		tmp = tmp->next;
 }

	if (tmp != NULL)
	{
		if (tmp == head)
		{
			head = tmp->next;
		}
		else
		{
			tmpdel->next = tmp->next;
		}

		if (tmp == tail)
		{
			tail = tmpdel;
		}

		delete tmp;
	}

}

void LinkedList::printAll(){
	
Node *tmp = head;
while (tmp != NULL)	{
	cout << tmp->value << " -> ";
	
	tmp = tmp->next;

	}
}
	
