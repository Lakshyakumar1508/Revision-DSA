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


Node* reverse(Node* head) {

    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {

        Node* forward = curr->next;

        curr->next = prev;

        prev = curr;
        curr = forward;
    }

    return prev;
}
