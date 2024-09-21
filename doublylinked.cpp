#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);

        if (!head) {
            // List is empty
            head = tail = newNode;
        } else {
            // Add the new node to the end
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to display the elements of the list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to free allocated memory
    ~DoublyLinkedList() {
        Node* current = head;
        Node* nextNode;

        while (current) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = tail = nullptr;
    }
};

int main() {
    DoublyLinkedList myList;

    // Insert elements into the doubly linked list
    myList.append(1);
    myList.append(2);
    myList.append(3);

    // Display the elements of the list
    std::cout << "Doubly Linked List: ";
    myList.display();

    return 0;
}

