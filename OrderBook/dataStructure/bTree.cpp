#include <deque>
#include <iostream>
#define ORDER 20

template <typename T>
class dLLNode {
public:
    T data;
    T* prev;
    T* next;

    // explicit dLLNode (T insertData) {
    //     data = insertData;
    //     next = nullptr;
    //     prev = nullptr;
    // }
    //
    // dLLNode (T insertData, T* prevData, T* nextData) {
    //     data = insertData;
    //     prev = prevData;
    //     next = nextData;
    // };
};

template <typename T>
class doubleLinkedList {
public:
    doubleLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

private:
    dLLNode<T>* head;
    dLLNode<T>* tail;

    static void Traversal(doubleLinkedList dLL) {
        if (head == nullptr) {

        }

        while(head != nullptr) {

        }
    };

    static void insertNode(doubleLinkedList dLL, dLLNode<T> Node) {
        if (head == nullptr) {
            head = &Node;
        }

        dLLNode<T>* temp = head;
        while(temp->next) {
            if (temp != nullptr && temp->data.value < temp->next.value) {
               std::cout << "Hello" << std::endl;
            }
        }

        if () {

        }
    }

    static void deleteNode(doubleLinkedList dLL) {

    }
};

template <typename T>
class BTreeNode {
public:
    doubleLinkedList<T> Node;
    // T keys[ORDER];
    int t;
    BTreeNode<T>* Children[ORDER];
    int n;
    bool leaf;
};

class BTree {
public:
    
};