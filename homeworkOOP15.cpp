#include <iostream>
#include <exception>
#include <initializer_list>
using namespace std;

//struct Node {
//    int value;
//    Node* next;
//    Node* prev;
//
//    Node(int value, Node* next = nullptr, Node* prev = nullptr) : value{ value }, next{ next }, prev{ prev } {}
//};
//
//class List {
//    Node* head;
//    Node* tail;
//
//public:
//    List() : head{ nullptr }, tail{ nullptr } {}
//
//    List(const initializer_list<int>& list)
//        : head{ nullptr }, tail{ nullptr } {
//        for (int elem : list) {
//            this->AddToTail(elem);
//        }
//    }
//
//    bool isEmpty() const {
//        return head == nullptr;
//    }
//
//    void AddToHead(int elem) {
//        Node* newNode = new Node(elem, head, nullptr);
//        if (isEmpty()) {
//            head = tail = newNode;
//        }
//        else {
//            head->prev = newNode;
//            head = newNode;
//        }
//    }
//
//    void AddToTail(int elem) {
//        try {
//            if (isEmpty()) {
//                throw exception("The list is empty. Cannot add to tail directly.");
//            }
//            Node* newNode = new Node(elem, nullptr, tail);
//            tail->next = newNode;
//            tail = newNode;
//        }
//        catch (const exception& e) {
//            cerr << "Exception: " << e.what() << endl;
//            AddToHead(elem);
//        }
//    }
//
//    int MaxElem() const {
//        if (isEmpty()) {
//            throw exception("List is empty. Cannot find maximum.");
//        }
//        Node* current = head;
//        int maxValue = head->value;
//        while (current != nullptr) {
//            if (current->value > maxValue) {
//                maxValue = current->value;
//            }
//            current = current->next;
//        }
//        return maxValue;
//    }
//
//    int MinElem() const {
//        if (isEmpty()) {
//            throw exception("List is empty. Cannot find minimum.");
//        }
//        Node* current = head;
//        int minValue = head->value;
//        while (current != nullptr) {
//            if (current->value < minValue) {
//                minValue = current->value;
//            }
//            current = current->next;
//        }
//        return minValue;
//    }
//
//    void Show() const {
//        if (isEmpty()) {
//            throw exception("List is empty. Nothing to show.");
//        }
//        for (auto i = head; i != nullptr; i = i->next) {
//            cout << i->value << " ";
//        }
//        cout << "\n********************************************\n";
//    }
//
//    void Clear() {
//        if (isEmpty()) {
//            throw exception("List is empty. Nothing to clear.");
//        }
//        while (head != nullptr) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//        head = tail = nullptr;
//    }
//
//    ~List() {
//        Clear();
//    }
//
//    void operator[](int index) {
//        if (isEmpty()) {
//            throw exception("List is empty. Cannot access elements.");
//        }
//        if (index < 0) {
//            throw exception("Index cannot be negative.");
//        }
//        Node* current = head;
//        int i = 0;
//        while (current != nullptr) {
//            if (i == index) {
//                int elem;
//                cout << "Enter element to set: ";
//                cin >> elem;
//                current->value = elem;
//                return;
//            }
//            current = current->next;
//            ++i;
//        }
//        throw exception("Index out of bounds.");
//    }
//
//    void DelByValue(int value) {
//        if (isEmpty()) {
//            throw exception("List is empty. Cannot delete by value.");
//        }
//        Node* current = head;
//        while (current != nullptr) {
//            if (current->value == value) {
//                if (current == head) {
//                    head = head->next;
//                    if (head) head->prev = nullptr;
//                }
//                else if (current == tail) {
//                    tail = tail->prev;
//                    if (tail) tail->next = nullptr;
//                }
//                else {
//                    current->prev->next = current->next;
//                    current->next->prev = current->prev;
//                }
//                delete current;
//                return;
//            }
//            current = current->next;
//        }
//        throw exception("Value not found in the list.");
//    }
//
//    void DelDublicate() {
//        if (isEmpty()) {
//            throw exception("List is empty. Cannot delete duplicates.");
//        }
//        Node* current = head;
//        while (current != nullptr) {
//            Node* runner = current->next;
//            while (runner != nullptr) {
//                if (runner->value == current->value) {
//                    Node* duplicate = runner;
//                    runner = runner->next;
//                    if (duplicate == tail) {
//                        tail = duplicate->prev;
//                        tail->next = nullptr;
//                    }
//                    else {
//                        duplicate->prev->next = duplicate->next;
//                        if (duplicate->next) {
//                            duplicate->next->prev = duplicate->prev;
//                        }
//                    }
//                    delete duplicate;
//                }
//                else {
//                    runner = runner->next;
//                }
//            }
//            current = current->next;
//        }
//    }
//};



//TASK 2

//class BaseException : public exception {
//protected:
//    string message;
//public:
//    BaseException(const string& msg) : message(msg) {}
//    const char* what() const noexcept override {
//        return message.c_str();
//    }
//};
//
//class MathException : public BaseException {
//public:
//    MathException(const string& msg) : BaseException("Math Error: " + msg) {}
//};
//
//class DivisionByZeroException : public MathException {
//public:
//    DivisionByZeroException() : MathException("Division by zero is not allowed.") {}
//};
//
//class OverflowException : public MathException {
//public:
//    OverflowException() : MathException("Overflow occurred during calculation.") {}
//};
//
//class MemoryException : public BaseException {
//public:
//    MemoryException(const string& msg) : BaseException("Memory Error: " + msg) {}
//};
//
//class NullPointerException : public MemoryException {
//public:
//    NullPointerException() : MemoryException("Null pointer dereferenced.") {}
//};
//
//class FileException : public BaseException {
//public:
//    FileException(const string& msg) : BaseException("File Error: " + msg) {}
//};
//
//class FileNotFoundException : public FileException {
//public:
//    FileNotFoundException(const string& filename)
//        : FileException("File not found: " + filename) {}
//};
//
//class FileReadException : public FileException {
//public:
//    FileReadException(const string& filename)
//        : FileException("Error reading from file: " + filename) {}
//};
//
//class ListException : public BaseException {
//public:
//    ListException(const string& msg) : BaseException("List Error: " + msg) {}
//};
//
//class IndexOutOfBoundsException : public ListException {
//public:
//    IndexOutOfBoundsException() : ListException("Index out of bounds.") {}
//};
//
//class EmptyListException : public ListException {
//public:
//    EmptyListException() : ListException("Operation not allowed on an empty list.") {}
//};

int main() {
    //try {
    //    List list{ 1, 2, 3, 4, 5, 2, 3 };
    //    list.Show();
    //    list.DelDublicate();
    //    list.Show();
    //    cout << "Max: " << list.MaxElem() << endl;
    //    cout << "Min: " << list.MinElem() << endl;
    //    list[2];
    //    list.Show();
    //    list.DelByValue(4);
    //    list.Show();
    //    list.Clear();
    //    list.Show(); 
    //}
    //catch (const exception& e) {
    //    cerr << "Exception caught: " << e.what() << endl;
    //}
}
