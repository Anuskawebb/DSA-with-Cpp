#include <iostream>

// Node structure
template <typename T>
struct Node {
    T data;
    Node* next;

    // Constructor
    Node(const T& value) : data(value), next(nullptr) {}
};

// LinkedList class
template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Destructor to free memory
    ~LinkedList() {
        clear();
    }

    // Function to insert a new element at the beginning of the list
    void insert(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to display the linked list
    void display() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to clear the linked list and free memory
    void clear() {
        Node<T>* current = head;
        Node<T>* nextNode = nullptr;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }
};

int main() {
    // Creating a linked list of integers
    LinkedList<int> myList;

    // Inserting elements
    myList.insert(10);
    myList.insert(20);
    myList.insert(30);

    // Displaying the linked list
    std::cout << "Linked List: ";
    myList.display();

    // Clearing the linked list
    myList.clear();

    return 0;
}

