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

// Delete at Head
Node* deletionAtHead(Node* head) {

    if (head == NULL)
        return NULL;

    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
}

// Delete at Last
Node* deletionAtLast(Node* head) {

    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    return head;
}

// Delete at Position
Node* deletionAtPosi(Node* head, int posi) {

    if (head == NULL)
        return NULL;

    if (posi == 0) {
        return deletionAtHead(head);
    }

    Node* temp = head;
    int cnt = 0;

    while (temp->next != NULL) {

        if (cnt == posi - 1) {

            Node* del = temp->next;

            temp->next = temp->next->next;

            delete del;

            return head;
        }

        cnt++;
        temp = temp->next;
    }

    return head;
}

// Print
void print(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(5);

    head->next = new Node(10);
    head->next->next = new Node(18);
    head->next->next->next = new Node(12);

    print(head);

    // Delete first
    head = deletionAtHead(head);
    print(head);

    // Delete last
    head = deletionAtLast(head);
    print(head);

    // Delete position 1
    head = deletionAtPosi(head, 1);
    print(head);

    return 0;
}