#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

// task 1
//struct Complex {
//    double real;
//    double imag;
//    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
//    Complex operator+(const Complex& other) const {
//        return Complex(real + other.real, imag + other.imag);
//    }
//    Complex operator-(const Complex& other) const {
//        return Complex(real - other.real, imag - other.imag);
//    }
//
//    Complex operator*(const Complex& other) const {
//        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
//    }
//
//    Complex operator/(const Complex& other) const {
//        double denom = other.real * other.real + other.imag * other.imag;
//        return Complex((real * other.real + imag * other.imag) / denom,
//            (imag * other.real - real * other.imag) / denom);
//    }
//
//    void print() const {
//        if (imag >= 0)
//            cout << real << " + " << imag << "i" << endl;
//        else
//            cout << real << " - " << -imag << "i" << endl;
//    }
//};



//task 2

//
//struct Car
//{
//    float height;
//    float clirens;
//    float V;
//    float P;
//    float d;
//    string color;
//    string type;
//};
//
//void ShowCar(Car car)
//{
//    cout << endl;
//    cout << "Height: " << car.height << endl;
//    cout << "Clirens: " << car.clirens << endl;
//    cout << "V: " << car.V << endl;
//    cout << "P: " << car.P << endl;
//    cout << "d: " << car.d << endl;
//    cout << "Color: " << car.color << endl;
//    cout << "Type : " << endl;
//}
//
//void FillCar(Car car)
//{
//    cout << "Enter height: ";
//    cin.ignore();
//    cin >> car.height;
//    cout << "Enter clirens: ";
//    cin >> car.clirens;
//    cout << "Enter V: ";
//    cin >> car.V;
//    cout << "Enter P: ";
//    cin >> car.P;
//    cout << "Enter d: ";
//    cin >> car.d;
//    cout << "Enter color: ";
//    getline(cin, car.color);
//    cout << "Enter type: ";
//    getline(cin, car.type);
//}
//
//void LoadFromFile(vector<Car>& cars, const string& filename)
//{
//    ifstream file(filename);
//    if (file.is_open())
//    {
//        cars.clear();
//        string line;
//        while (getline(file, line))
//        {
//            Car car;
//            rsize_t pos = 0;
//
//            pos = line.find(",");
//            car.height = stoi(line.substr(0, pos));
//            line.erase(0, pos + 1);
//
//            pos = line.find(",");
//            car.clirens = stoi(line.substr(0, pos));
//            line.erase(0, pos + 1);
//            
//            pos = line.find(",");
//            car.V = stoi(line.substr(0, pos));
//            line.erase(0, pos + 1);
//            
//            pos = line.find(",");
//            car.P = stoi(line.substr(0, pos));
//            line.erase(0, pos + 1);
//
//            pos = line.find(",");
//            car.d = stoi(line.substr(0, pos));
//            line.erase(0, pos + 1);
//
//            pos = line.find(",");
//            car.color = line.substr(0, pos);
//            line.erase(0, pos + 1);
//
//            pos = line.find(",");
//            car.type = line.substr(0, pos);
//            line.erase(0, pos + 1);
//        }
//    }
//}
//
//void SaveToFile(const vector<Car>& cars, const string& path)
//{
//    ofstream file(path, ios::app);
//    if (file.is_open())
//    {
//        for (auto car : cars)
//        {
//            file << car.height << "," << car.clirens << "," << car.V << "," << car.P << "," << car.d << "," << car.color << "," << car.type << endl;
//        }
//        file.close();
//        cout << "Data save to file!" << endl;
//     }
//    else
//    {
//        cout << "Invalid open file!!!!" << endl;
//    }
//}
//
//void ShowCars(const vector<Car>& cars)
//{
//    cout << "Cars: " << endl;
//    for (auto car : cars)
//    {
//        ShowCar(car);
//    }
//    cout << "******************************************************" << endl;
//}
//
//void Menu()
//{
//    vector<Car> cars;
//    string filename = "car.txt";
//    Car MyCar;
//    int choise;
//    cout << "[1] - Show car; \n[2] - Fill car; \n[3] - load from file and shaw" << endl;
//    cout << "What your choise: ";
//    cin >> choise;
//    switch (choise)
//    {
//    case 1: 
//        ShowCars(cars);
//        break;
//    case 2:
//        FillCar(MyCar);
//        cars.push_back(MyCar);
//        SaveToFile(cars, filename);
//        break;
//    case 3:
//        LoadFromFile(cars, filename);
//        ShowCars(cars);
//        break;
//    default:
//        break;
//    }
//}

int main()
{
    //task 1
    //Complex c1(3, 4);  
    //Complex c2(1, 2);  

    //Complex sum = c1 + c2;
    //Complex diff = c1 - c2;
    //Complex prod = c1 * c2;
    //Complex quot = c1 / c2;

    //cout << "Sum: "; sum.print(); 
    //cout << "Difference: "; diff.print();  
    //cout << "Product: "; prod.print();  
    //cout << "Quotient: "; quot.print(); 


    // task 2
    //Menu();
}
