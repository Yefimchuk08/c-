//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//class Reservoir {
//private:
//    string name;
//    string type;
//    double width, length, maxDepth;
//
//public:
//    Reservoir() : name(""), type(""), width(0), length(0), maxDepth(0) {}
//    Reservoir(const string& n, const string& t, double w, double l, double d)
//        : name(n), type(t), width(w), length(l), maxDepth(d) {}
//
//    double volume() const { return width * length * maxDepth; }
//    double surfaceArea() const { return width * length; }
//    bool isSameType(const Reservoir& other) const { return type == other.type; }
//
//    void saveToText(ofstream& file) const {
//        file << name << " " << type << " " << width << " " << length << " " << maxDepth << "\n";
//    }
//
//    void loadFromText(ifstream& file) {
//        file >> name >> type >> width >> length >> maxDepth;
//    }
//
//    void display() const {
//        cout << "Name: " << name << ", Type: " << type
//            << ", Width: " << width << ", Length: " << length
//            << ", Max Depth: " << maxDepth
//            << ", Volume: " << volume()
//            << ", Surface Area: " << surfaceArea() << endl;
//    }
//};
//
//class ReservoirManager {
//private:
//    Reservoir* reservoirs;
//    size_t size, capacity;
//
//    void resize() {
//        capacity *= 2;
//        Reservoir* newReservoirs = new Reservoir[capacity];
//        for (size_t i = 0; i < size; ++i)
//            newReservoirs[i] = reservoirs[i];
//        delete[] reservoirs;
//        reservoirs = newReservoirs;
//    }
//
//public:
//    ReservoirManager() : size(0), capacity(2) {
//        reservoirs = new Reservoir[capacity];
//    }
//
//    ~ReservoirManager() {
//        delete[] reservoirs;
//    }
//
//    void addReservoir(const Reservoir& reservoir) {
//        if (size >= capacity)
//            resize();
//        reservoirs[size++] = reservoir;
//    }
//
//    void removeReservoir(size_t index) {
//        if (index < size) {
//            for (size_t i = index; i < size - 1; ++i)
//                reservoirs[i] = reservoirs[i + 1];
//            --size;
//        }
//    }
//
//    void saveToFile(const string& filename) const {
//        ofstream file(filename);
//        for (size_t i = 0; i < size; ++i)
//            reservoirs[i].saveToText(file);
//    }
//
//    void loadFromFile(const string& filename) {
//        ifstream file(filename);
//        size = 0;
//        while (file.peek() != EOF) {
//            Reservoir res;
//            res.loadFromText(file);
//            addReservoir(res);
//        }
//    }
//
//    void displayReservoirs() const {
//        for (size_t i = 0; i < size; ++i)
//            reservoirs[i].display();
//    }
//};
//
//int main() {
//    ReservoirManager manager;
//    manager.addReservoir(Reservoir("Ocean", "Sea", 1000, 2000, 500));
//    manager.addReservoir(Reservoir("Lake", "Pond", 100, 200, 50));
//
//    manager.saveToFile("reservoirs.txt");
//
//    ReservoirManager newManager;
//    newManager.loadFromFile("reservoirs.txt");
//    newManager.displayReservoirs();
//}
