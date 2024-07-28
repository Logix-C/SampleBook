// Online C++ compiler to run C++ program online
#include <iostream>

template <typename T>
struct dLLNode{
    T data;
    dLLNode* prev;
    dLLNode* next;

    dLLNode(T data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

template <typename T>
class doubleLinkedList{
public:
    doubleLinkedList() : head(NULL){};

private:
    dLLNode<T>* head;

    void insertNode(dLLNode<T> Node){
        dLLNode<T>* newNode = Node;
        if (head == nullptr){
            head = newNode;
            return;
        }

        dLLNode<T>* temp = head;
        while(newNode != nullptr){
            if (newNode->value <= newNode->next.value){
                newNode->next = temp->next;
                newNode->prev = temp;
                if (temp->next != nullptr) {
                    temp->next->prev = newNode;
                }
                temp->next = newNode;

            } else {
                continue;
            }
        }
    }

    void deleteNode(doubleLinkedList dLL){

    }
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}