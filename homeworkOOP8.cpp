#include <iostream>
#include <string>

using namespace std;

//ДЗ ПО СТЕКУ

//class BracketChecker {
//private:
//    char stack[100];
//    int top;
//
//public:
//    BracketChecker() : top(-1) {}
//
//    void push(char ch) {
//        if (top < 99) {
//            stack[++top] = ch;
//        }
//    }
//
//    char pop() {
//        if (top >= 0) {
//            return stack[top--];
//        }
//        return '\0';
//    }
//
//    bool isEmpty() const {
//        return top == -1;
//    }
//
//    bool checkBrackets(const string& expression) {
//        for (size_t i = 0; i < expression.size(); ++i) {
//            char ch = expression[i];
//            if (ch == '(' || ch == '{' || ch == '[') {
//                push(ch);
//            }
//            else if (ch == ')' || ch == '}' || ch == ']') {
//                if (isEmpty()) {
//                    cout << "Error: Extra closing bracket at position " << i << endl;
//                    cout << "String up to error: " << expression.substr(0, i + 1) << endl;
//                    return false;
//                }
//                char openBracket = pop();
//                if ((ch == ')' && openBracket != '(') ||
//                    (ch == '}' && openBracket != '{') ||
//                    (ch == ']' && openBracket != '[')) {
//                    cout << "Error: Mismatched bracket at position " << i << endl;
//                    cout << "String up to error: " << expression.substr(0, i + 1) << endl;
//                    return false;
//                }
//            }
//        }
//        if (!isEmpty()) {
//            cout << "Error: Extra opening brackets" << endl;
//            return false;
//        }
//        cout << "The string is correct" << endl;
//        return true;
//    }
//};

//ДЗ ПО ЧЕРЗІ

//TASK 1


//class Passenger {
//public:
//    int arrivalTime;
//    Passenger(int arrival) : arrivalTime(arrival) {}
//};
//
//class Bus {
//public:
//    int availableSeats;
//    Bus(int seats) : availableSeats(seats) {}
//};
//
//class BusStop {
//private:
//    Passenger* passengers[100];
//    int maxPassengers;
//    bool isTerminal;
//    int passengerArrivalRate;
//    int busArrivalRate;
//    int totalPassengers;
//
//public:
//    BusStop(int maxPassengers, bool isTerminal, int passengerRate, int busRate)
//        : maxPassengers(maxPassengers), isTerminal(isTerminal), passengerArrivalRate(passengerRate), busArrivalRate(busRate), totalPassengers(0) {}
//
//    void simulate(int totalTime) {
//        int time = 0;
//        int totalWaitTime = 0;
//        int busArrivalTime = 0;
//
//        while (time < totalTime) {
//            // Прийом пасажирів
//            if (time % passengerArrivalRate == 0) {
//                passengers[totalPassengers++] = new Passenger(time);
//            }
//
//            // Приїзд маршрутки
//            if (time == busArrivalTime) {
//                int freeSeats = 5; // Кількість вільних місць у маршрутці, задана вручну
//                Bus bus(freeSeats);
//
//                // Забираємо пасажирів з зупинки
//                while (totalPassengers > 0 && bus.availableSeats > 0) {
//                    Passenger* passenger = passengers[--totalPassengers];
//                    totalWaitTime += time - passenger->arrivalTime;
//                    bus.availableSeats--;
//                    delete passenger;
//                }
//
//                busArrivalTime += busArrivalRate; // Час наступного приїзду маршрутки
//            }
//
//            if (totalPassengers > maxPassengers) {
//                cout << "Warning: More than " << maxPassengers << " passengers at the stop.\n";
//            }
//
//            time++;
//        }
//
//        if (totalPassengers > 0) {
//            cout << "Average wait time: " << totalWaitTime / totalPassengers << " minutes\n";
//        }
//        else {
//            cout << "No passengers to calculate wait time.\n";
//        }
//    }
//};



    // TASK 2

//class PrintRequest {
//public:
//    string user;
//    int priority;
//    int requestTime;
//
//    PrintRequest() : priority(0), requestTime(0) {}
//
//    PrintRequest(string u, int p, int t) : user(u), priority(p), requestTime(t) {}
//};
//
//class PrinterQueue {
//private:
//    PrintRequest queue[100];
//    int size;
//
//public:
//    PrinterQueue() : size(0) {}
//
//    void addRequest(string user, int priority) {
//        if (size < 100) {
//            int currentTime = size * 10; // Лічильник часу (просто для відображення інтервалів)
//            PrintRequest newRequest(user, priority, currentTime);
//            int i = size;
//            while (i > 0 && queue[i - 1].priority < priority) {
//                queue[i] = queue[i - 1];
//                i--;
//            }
//            queue[i] = newRequest;
//            size++;
//        }
//    }
//
//    void processRequests() {
//        while (size > 0) {
//            PrintRequest request = queue[0];
//            for (int i = 1; i < size; i++) {
//                queue[i - 1] = queue[i];
//            }
//            size--;
//            cout << "Printing request from " << request.user << " at Time: " << request.requestTime << endl;
//        }
//    }
//
//    void printStatistics() {
//        for (int i = 0; i < size; i++) {
//            cout << "User: " << queue[i].user << ", Priority: " << queue[i].priority << ", Time: " << queue[i].requestTime << endl;
//        }
//    }
//};


int main() {
    //ДЗ ПО СТЕКУ

    //string expression;
    //cout << "Enter a string to check: ";
    //getline(cin, expression);

    //BracketChecker checker;
    //checker.checkBrackets(expression);

    //ДЗ ПО ЧЕРЗІ
    //BusStop stop(10, false, 5, 15);
    //stop.simulate(100);

    // TASK 2
    //PrinterQueue printerQueue;
    //printerQueue.addRequest("User1", 3);
    //printerQueue.addRequest("User2", 1);
    //printerQueue.addRequest("User3", 2);

    //cout << "Processing print requests:\n";
    //printerQueue.processRequests();

    //cout << "\nPrint Statistics:\n";
    //printerQueue.printStatistics();
}
