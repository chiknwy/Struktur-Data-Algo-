#include <iostream>
#include "LinkedList.h"
using namespace std;

void linkedlist::InsertToHead(int input){

    Node *newNode = new Node();
    newNode->value = input;

    newNode->next = head;
    head = newNode;

    if(tail==NULL)
        tail = head;



}


void linkedlist::PrintAll(){

    Node *tmp = head;
    while(tmp!=NULL){

    cout << tmp->value << "->";
    tmp = tmp ->next;

}
    cout << endl;
}
void linkedlist::InsertToTail(int input){
    Node* newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;

    if (tail == NULL) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void linkedlist::deleteFromHead()
{
    if (head == NULL) {
        return;
    }

    Node* temp = head;

    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
    }

    delete temp;
}

void linkedlist::deleteFromTail()
{
    if (tail == NULL) {
        return;
    }

    Node* temp = tail;

    if (head == tail) {
        head = tail = NULL;
    } else {
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        tail = current;

        tail->next = NULL;
    }

    delete temp;
}


void linkedlist::InsertAfter(int nodeValue, int input){
    Node* newNode = new Node();
    newNode->value = input;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    Node* curr = head;
    while (curr != NULL) {
        if (curr->value == nodeValue) {
            newNode->next = curr->next;
            curr->next = newNode;
            if (curr == tail) {
                tail = newNode;
            }
            return;
        }
        curr = curr->next;
    }
    cout << "Node with value " << nodeValue << " not found" << endl;
}



