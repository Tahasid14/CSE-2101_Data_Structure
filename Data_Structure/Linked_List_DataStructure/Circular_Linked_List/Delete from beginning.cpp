#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* deleteFirstNode(Node* last) {
    if (last == NULL) {
        cout << "List is empty" << endl;
        return NULL;
    }

    Node* head = last->next;

    if (head == last) {
        delete head;
        last = NULL;
    } else {
        last->next = head->next;
        delete head;
    }

    return last;
}

void printList(Node* last) {
    if(last == NULL) return ;

    Node *head = last->next;
    while (true){
        cout << head->data << " ";
        head = head->next;
        if (head == last->next) break;
    }
    cout << endl;
}

int main() {

    Node* first = new Node(9);
    first->next = new Node(35);
    first->next->next = new Node(47);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printList(last);

    last = deleteFirstNode(last);

    cout << "List after deleting first node: ";
    printList(last);

    return 0;
}