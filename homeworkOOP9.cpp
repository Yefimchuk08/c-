#include <iostream>
using namespace std;
//template <typename T>
//class Stack {
//private:
//    struct Node {
//        T data;
//        Node* next;
//        Node(T value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
//    };
//
//    Node* topNode;
//
//public:
//    Stack() : topNode(nullptr) {}
//
//    ~Stack() {
//        while (!isEmpty()) {
//            pop();
//        }
//    }
//
//    void push(T value) {
//        topNode = new Node(value, topNode);
//    }
//
//    void pop() {
//        if (isEmpty()) return;
//        Node* temp = topNode;
//        topNode = topNode->next;
//        delete temp;
//    }
//
//    T top() {
//        if (isEmpty()) throw std::runtime_error("Stack is empty");
//        return topNode->data;
//    }
//
//    bool isEmpty() {
//        return topNode == nullptr;
//    }
//};


//TASK 2
//struct Node {
//    int data;
//    Node* next;
//    Node(int value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
//};
//class LinkedList {
//
//
//    Node* head;
//
//public:
//    LinkedList() : head(nullptr) {}
//
//    ~LinkedList() {
//        while (head) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//
//    void pushBack(int value) {
//        if (!head) {
//            head = new Node(value);
//        }
//        else {
//            Node* temp = head;
//            while (temp->next) {
//                temp = temp->next;
//            }
//            temp->next = new Node(value);
//        }
//    }
//
//    void print() const {
//        Node* temp = head;
//        while (temp) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//
//   
//    Node* clone() const {
//        if (!head) return nullptr;
//
//        Node* newHead = new Node(head->data);
//        Node* current = head->next;
//        Node* newCurrent = newHead;
//
//        while (current) {
//            newCurrent->next = new Node(current->data);
//            newCurrent = newCurrent->next;
//            current = current->next;
//        }
//
//        return newHead;
//    }
//
//    
//    friend Node* operator+(const LinkedList& list1, const LinkedList& list2) {
//        if (!list1.head) return list2.clone();
//        if (!list2.head) return list1.clone();
//
//        Node* newHead = list1.clone();
//        Node* temp = newHead;
//
//        while (temp->next) {
//            temp = temp->next;
//        }
//        temp->next = list2.clone();
//
//        return newHead;
//    }
//
//    
//    friend Node* operator*(const LinkedList& list1, const LinkedList& list2) {
//        if (!list1.head || !list2.head) return nullptr;
//
//        Node* newHead = nullptr;
//        Node* newTail = nullptr;
//
//        for (Node* current1 = list1.head; current1; current1 = current1->next) {
//            for (Node* current2 = list2.head; current2; current2 = current2->next) {
//                if (current1->data == current2->data) {
//                    if (!newHead) {
//                        newHead = new Node(current1->data);
//                        newTail = newHead;
//                    }
//                    else {
//                        newTail->next = new Node(current1->data);
//                        newTail = newTail->next;
//                    }
//                    break; 
//                }
//            }
//        }
//
//        return newHead;
//    }
//};


int main() {
    //Stack<int> stack;
    //stack.push(10);
    //stack.push(20);
    //stack.push(30);
    //cout << stack.top() << endl;
    //stack.pop();
    //cout << stack.top() << endl;
    //stack.pop();
    //stack.pop();
    //cout << stack.isEmpty() << endl;





   

    //LinkedList list1, list2;

    //list1.pushBack(1);
    //list1.pushBack(2);
    //list1.pushBack(3);

    //list2.pushBack(2);
    //list2.pushBack(3);
    //list2.pushBack(4);

    //cout << "List 1: ";
    //list1.print();

    //cout << "List 2: ";
    //list2.print();

    //Node* clonedList = list1.clone();
    //cout << "Cloned List 1: ";
    //LinkedList temp;
    //temp = LinkedList();
    //temp.pushBack(clonedList->data);
    //temp.print();

    //Node* combinedList = list1 + list2;
    //cout << "Combined List: ";
    //temp = LinkedList();
    //temp.pushBack(combinedList->data);
    //temp.print();

    //Node* commonList = list1 * list2;
    //cout << "Common Elements List: ";
    //temp = LinkedList();
    //temp.pushBack(commonList->data);
    //temp.print();

    //
}
