#include <iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this-> prev = NULL;
    }
};


Node* insertionAtHead(Node* head, int data) {

    Node* temp = new Node(data);

    // Empty list
    if(head == NULL) {
        return temp;
    }

    temp->next = head;
    temp->prev = NULL;

    head->prev = temp;

    head = temp;

    return head;
}

Node* insertionAtLast(Node* head , int data){
    Node* newNode = new Node(data);

    if(head == NULL) {
        return newNode;
    }

    Node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> prev = temp;
    newNode -> next =NULL;

    return head;
}

Node* insertionAtPosi(Node* head, int posi, int data) {

    Node* newNode = new Node(data);

    // Insert at head
    if(posi == 0) {
        newNode->next = head;

        if(head != NULL) {
            head->prev = newNode;
        }

        return newNode;
    }

    Node* temp = head;
    int cnt = 0;

    // Move to node just before the required position
    while(temp != NULL && cnt < posi - 1) {
        temp = temp->next;
        cnt++;
    }

    // Invalid position
    if(temp == NULL) {
        delete newNode;
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;

    return head;
}

Node* deletionAtHead(Node* head) {

    if(head == NULL) {
        return NULL;
    }

    Node* temp = head;

    head = head->next;

    if(head != NULL) {
        head->prev = NULL;
    }

    delete temp;

    return head;
}

Node* deletionAtLast(Node* head) {

    if(head == NULL) {
        return NULL;
    }

    // Only one node
    if(head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    Node* last = temp;

    temp->prev->next = NULL;

    delete last;

    return head;
}

Node* deletionAtPosi(Node* head, int posi) {

    if(head == NULL) {
        return NULL;
    }

    // Delete head
    if(posi == 0) {
        Node* temp = head;

        head = head->next;

        if(head != NULL) {
            head->prev = NULL;
        }

        delete temp;
        return head;
    }

    Node* temp = head;
    int cnt = 0;

    // Reach the node at position posi
    while(temp != NULL && cnt < posi) {
        temp = temp->next;
        cnt++;
    }

    // Invalid position
    if(temp == NULL) {
        return head;
    }

    // Connect previous node to next node
    temp->prev->next = temp->next;

    // Connect next node to previous node
    if(temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    delete temp;

    return head;
}