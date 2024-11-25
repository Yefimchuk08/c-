#include <iostream>
#include <string>

using namespace std;

struct Violation {
    string description;
    Violation* next = nullptr;
};

struct Node {
    string carNumber;
    Violation* violations;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(const string& number) : carNumber(number), violations(nullptr) {}
};

class TrafficDatabase {
private:
    Node* root = nullptr;

    void addViolation(Node*& node, const string& carNumber, const string& violation) {
        if (!node) {
            node = new Node(carNumber);
            node->violations = new Violation{ violation };
        }
        else if (carNumber < node->carNumber) {
            addViolation(node->left, carNumber, violation);
        }
        else if (carNumber > node->carNumber) {
            addViolation(node->right, carNumber, violation);
        }
        else {
            Violation* current = node->violations;
            while (current->next) {
                current = current->next;
            }
            current->next = new Violation{ violation };
        }
    }

    void printDatabase(Node* node) const {
        if (!node) return;
        printDatabase(node->left);
        cout << "Машина " << node->carNumber << ": (Car) ";
        Violation* current = node->violations;
        while (current) {
            cout << current->description << "; ";
            current = current->next;
        }
        cout << endl;
        printDatabase(node->right);
    }

    Node* findNode(Node* node, const string& carNumber) const {
        if (!node) return nullptr;
        if (carNumber < node->carNumber) return findNode(node->left, carNumber);
        if (carNumber > node->carNumber) return findNode(node->right, carNumber);
        return node;
    }

    void printInRange(Node* node, const string& start, const string& end) const {
        if (!node) return;
        if (node->carNumber >= start) printInRange(node->left, start, end);
        if (node->carNumber >= start && node->carNumber <= end) {
            cout << "Машина " << node->carNumber << ": (Car) ";
            Violation* current = node->violations;
            while (current) {
                cout << current->description << "; ";
                current = current->next;
            }
            cout << endl;
        }
        if (node->carNumber <= end) printInRange(node->right, start, end);
    }

    void deleteViolations(Violation* violations) {
        while (violations) {
            Violation* temp = violations;
            violations = violations->next;
            delete temp;
        }
    }

    void deleteTree(Node* node) {
        if (!node) return;
        deleteTree(node->left);
        deleteTree(node->right);
        deleteViolations(node->violations);
        delete node;
    }

public:
    ~TrafficDatabase() {
        deleteTree(root);
    }

    void addTicket(const string& carNumber, const string& violation) {
        addViolation(root, carNumber, violation);
    }

    void printDatabase() const {
        printDatabase(root);
    }

    void printByCarNumber(const string& carNumber) const {
        Node* node = findNode(root, carNumber);
        if (node) {
            cout << "Машина " << node->carNumber << ": (Car) ";
            Violation* current = node->violations;
            while (current) {
                cout << current->description << "; ";
                current = current->next;
            }
            cout << endl;
        }
        else {
            cout << "Машина з номером " << carNumber << " не знайдена. (Car with number not found)" << endl;
        }
    }

    void printByRange(const string& start, const string& end) const {
        printInRange(root, start, end);
    }
};

int main() {
    TrafficDatabase db;
    db.addTicket("AB1234", "Speeding");
    db.addTicket("BC2345", "Illegal parking");
    db.addTicket("AB1234", "Running a red light");
    db.addTicket("CD3456", "Improper overtaking");

    cout << "Full database listing:" << endl;
    db.printDatabase();

    cout << "\nData for car number 'AB1234':" << endl;
    db.printByCarNumber("AB1234");

    cout << "\nData for range 'AB1000' - 'BC3000':" << endl;
    db.printByRange("AB1000", "BC3000");

}
