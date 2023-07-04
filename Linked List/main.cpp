#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(int argc, char** argv) {
	
		LinkedList list1;
		list1.insertToHead(2);
		list1.insertToHead(7);
		list1.insertToTail(1);
		list1.deleteToHead();
		list1.insertToTail(28);
		list1.insertAfter(11, 1);
		list1.insertAfter(9, 2);
		list1.deleteToTail();
		list1.deleteByValue(9);
		list1.insertAfter(23, 11);
		list1.insertAfter(35, 1);
		list1.insertAfter(89, 1);
		list1.deleteByValue(1);					
		
		
		cout << "Head:" <<list1.head->value << endl;
	
		cout << "Tail:" <<list1.tail->value << endl << endl;
		
		cout << "Isi dari linked list:" << endl;
		list1.printAll();
		
	return 0;
}
