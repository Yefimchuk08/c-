#include <iostream>
#include <cstring>

using namespace std;
//
// TASK 1
// 
//class Human {
//private:
//    char* name;
//    int age;
//
//public:
//    Human(const char* name, int age) : age(age) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//    }
//
//    Human(const Human& other) : age(other.age) {
//        name = new char[strlen(other.name) + 1];
//        strcpy(name, other.name);
//    }
//
//    ~Human() {
//        delete[] name;
//    }
//
//    void printInfo() const {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//class Apartment {
//private:
//    Human** residents;
//    int residentCount;
//    int capacity;
//
//public:
//    Apartment(int capacity) : residentCount(0), capacity(capacity) {
//        residents = new Human * [capacity];
//    }
//
//    ~Apartment() {
//        for (int i = 0; i < residentCount; ++i) {
//            delete residents[i];
//        }
//        delete[] residents;
//    }
//
//    void addResident(const Human& resident) {
//        if (residentCount < capacity) {
//            residents[residentCount++] = new Human(resident);
//        }
//        else {
//            cout << "Apartment is full!" << endl;
//        }
//    }
//
//    void printResidents() const {
//        cout << "Apartment residents:" << endl;
//        for (int i = 0; i < residentCount; ++i) {
//            residents[i]->printInfo();
//        }
//    }
//};
//
//class House {
//private:
//    Apartment** apartments;
//    int apartmentCount;
//    int capacity;
//
//public:
//    House(int capacity) : apartmentCount(0), capacity(capacity) {
//        apartments = new Apartment * [capacity];
//    }
//
//    ~House() {
//        for (int i = 0; i < apartmentCount; ++i) {
//            delete apartments[i];
//        }
//        delete[] apartments;
//    }
//
//    void addApartment(Apartment* apartment) {
//        if (apartmentCount < capacity) {
//            apartments[apartmentCount++] = apartment;
//        }
//        else {
//           cout << "House is full!" << endl;
//        }
//    }
//
//    void printApartments() const {
//        cout << "House apartments:" << endl;
//        for (int i = 0; i < apartmentCount; ++i) {
//            cout << "Apartment " << i + 1 << ":" << endl;
//            apartments[i]->printResidents();
//        }
//    }
//};

//TASK 2

class Train {
    int* arrVagon;
    int count;
};
#include <iostream>
#include <cstring>

class Vagon {
private:
    int number;
    int seatCount;
    int passengerCount;

public:
  
    Vagon() : number(0), seatCount(0), passengerCount(0) {}

    Vagon(int number, int seatCount, int passengerCount)
        : number(number), seatCount(seatCount), passengerCount(passengerCount) {}


    void addPassenger() {
        if (passengerCount < seatCount) {
            passengerCount++;
        }
        else {
            std::cout << "Vagon " << number << " is full!" << std::endl;
        }
    }

   
    void show() const {
        std::cout << "Vagon number: " << number
            << ", Seats: " << seatCount
            << ", Passengers: " << passengerCount << std::endl;
    }
};

class Train {
private:
    char* model;   
    int vagonCount;
    Vagon* vagons;   

public:
    
    Train() : model(nullptr), vagonCount(0), vagons(nullptr) {}

 
    Train(const char* model) : vagonCount(0) {
        this->model = new char[strlen(model) + 1];
        strcpy(this->model, model);
        vagons = nullptr;
    }

 
    Train(const Train& other) : vagonCount(other.vagonCount) {
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);
        vagons = new Vagon[vagonCount];
        for (int i = 0; i < vagonCount; ++i) {
            vagons[i] = other.vagons[i];
        }
    }

    
    ~Train() {
        delete[] model;
        delete[] vagons;
    }

  
    void addVagon(const Vagon& newVagon) {
        Vagon* temp = new Vagon[vagonCount + 1];
        for (int i = 0; i < vagonCount; ++i) {
            temp[i] = vagons[i];
        }
        temp[vagonCount] = newVagon;
        delete[] vagons;
        vagons = temp;
        vagonCount++;
    }

 
    void addPassengerToVagon(int vagonNumber) {
        if (vagonNumber >= 0 && vagonNumber < vagonCount) {
            vagons[vagonNumber].addPassenger();
        }
        else {
            std::cout << "Invalid vagon number!" << std::endl;
        }
    }

    
    void show() const {
        std::cout << "Train model: " << model << std::endl;
        std::cout << "Number of vagons: " << vagonCount << std::endl;
        for (int i = 0; i < vagonCount; ++i) {
            vagons[i].show();
        }
    }
};






int main() {
    //TASK 1


    //Human person1("Alice", 30);
    //Human person2("Bob", 25);
    //Human person3("Charlie", 40);

    //Apartment* apartment1 = new Apartment(2);
    //apartment1->addResident(person1);
    //apartment1->addResident(person2);

    //Apartment* apartment2 = new Apartment(2);
    //apartment2->addResident(person3);

    //House house(2);
    //house.addApartment(apartment1);
    //house.addApartment(apartment2);

    //house.printApartments();

    //delete apartment1;
    //delete apartment2;

    //TASK 2

    
    //Train train("Express-1000");

  
    //Vagon vagon1(1, 50, 20);
    //Vagon vagon2(2, 60, 55);
    //train.addVagon(vagon1);
    //train.addVagon(vagon2);

  
    //train.addPassengerToVagon(0);
    //train.addPassengerToVagon(1);
    //train.addPassengerToVagon(1);

   
    //train.show();

}
