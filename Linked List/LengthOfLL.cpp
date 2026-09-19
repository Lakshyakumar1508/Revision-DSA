#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data ; 
    Node* next;

    Node(int d){
        this-> data = d;
        this -> next = NULL;
    }
};

int getLength(Node* head) {
    Node* temp = head;
    int length = 0;

    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }

    return length;
}