
#include <iostream>
#include "LinkedList.h"
using namespace std;


int main() {
	
	
    linkedlist list1;
    cout<<"list1\n";

    list1.InsertToHead(10);
    list1.InsertToHead(20);
    list1.InsertToTail(30);
    list1.InsertToTail(40);

    cout << "Head value: " << list1.head->value << endl;
    cout << "Tail value: " << list1.tail->value << endl;

    list1.PrintAll();
	
	list1.deleteFromHead();
	list1.deleteFromTail();
	cout << "Head value: " << list1.head->value << endl;
    cout << "Tail value: " << list1.tail->value << endl;
	
	
	list1.PrintAll();
	
	list1.InsertAfter(10,24);
	
	list1.PrintAll();
	list1.InsertAfter(12,24);
    
    
    linkedlist list2;
    cout<<endl<<"list2\n";

    list2.InsertToHead(30);
    list2.InsertToHead(50);
    list2.InsertToTail(90);
    list2.InsertToTail(10);

    cout << "Head value: " << list2.head->value << endl;
    cout << "Tail value: " << list2.tail->value << endl;

    list2.PrintAll();

    return 0;
}

