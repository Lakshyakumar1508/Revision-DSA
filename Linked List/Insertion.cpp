#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int data) {

    Node* temp = new Node(data);

    if (head == NULL) {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void insertAtLast(Node*& head, int data) {

    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertionAtMiddle(Node*& head, int data, int target) {

    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == target) {
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }

        temp = temp->next;
    }
}

void insertionAtPosi(Node*& head, int posi, int data) {

    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    int cnt = 0;

    while (temp != nullptr) {

        if (cnt == posi) {
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }

        cnt++;
        temp = temp->next;
    }
}

void print(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;

    insertAtHead(head, 6);
    print(head);

    insertAtLast(head, 4);
    print(head);

    insertionAtPosition(head, 5, 6);
    print(head);

    return 0;
}