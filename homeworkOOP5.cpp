#include <iostream>
using namespace std;

//class Drobe {
//    int chs1, znm1;
//    int chs2, znm2;
//public:
//    Drobe() : chs1(0), znm1(1), chs2(0), znm2(1) {}
//    Drobe(int c1, int z1, int c2 = 0, int z2 = 1) : chs1(c1), znm1(z1), chs2(c2), znm2(z2) {}
//    Drobe(const Drobe& other)
//    {
//        this->chs1 = other.chs1;
//        this->znm1 = other.znm1;
//        this->chs2 = other.chs2;
//        this->znm2 = other.znm2;
//    }
//    void FillDrobe() {
//        cout << "Enter first chuselnik: ";
//        cin >> chs1;
//        cout << "Enter first znamennik: ";
//        cin >> znm1;
//        cout << "Enter second chuselnik: ";
//        cin >> chs2;
//        cout << "Enter second znamennik: ";
//        cin >> znm2;
//    }
//
//    void ShowDrobes() const {
//        cout << "First drobe: " << chs1 << "/" << znm1 << endl;
//        cout << "Second drobe: " << chs2 << "/" << znm2 << endl;
//    }
//
//    Drobe operator +() const {
//        int common_znamennik = znm1 * znm2;
//        int new_chs = chs1 * znm2 + chs2 * znm1;
//        return Drobe(new_chs, common_znamennik);
//    }
//
//    Drobe operator -() const {
//        int common_znamennik = znm1 * znm2;
//        int new_chs = chs1 * znm2 - chs2 * znm1;
//        return Drobe(new_chs, common_znamennik);
//    }
//
//    Drobe operator *() const {
//        int new_chs = chs1 * chs2;
//        int new_znm = znm1 * znm2;
//        return Drobe(new_chs, new_znm);
//    }
//
//    Drobe operator/(const Drobe& other) const {
//        int new_chs = chs1 * other.znm1;
//        int new_znm = znm1 * other.chs1;
//        return Drobe(new_chs, new_znm);
//    }
//
//
//    void ShowResult() const {
//        cout << "Result drobe: " << chs1 << "/" << znm1 << endl;
//    }
//};
//
//void Menu() {
//    int choice;
//    Drobe drobe;
//    drobe.FillDrobe();
//    drobe.ShowDrobes();
//
//    cout << "[1] - Sum;\n[2] - Subtract;\n[3] - Multiply;\n[4] - Division;\n[5] - Exit;\nWhat is your choice: ";
//    cin >> choice;
//
//    Drobe result;
//    switch (choice) {
//    case 1:
//        result = +drobe;
//        result.ShowResult();
//        break;
//    case 2:
//        result = -drobe;
//        result.ShowResult();
//        break;
//    case 3:
//        result = *drobe;
//        result.ShowResult();
//        break;
//    case 4:
//        Drobe anotherDrobe;
//        anotherDrobe.FillDrobe();
//        result = drobe / anotherDrobe;
//        result.ShowResult();
//        break;
//    case 5:
//        break;
//    default:
//        cout << "Invalid option." << endl;
//    }
//}


class Complex {
private:
    double real;
    double imag;

public:
   
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

   
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex& other) const {
        double denom = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denom,
            (imag * other.real - real * other.imag) / denom);
    }

    void print() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};
int main() {
    //Menu();

    Complex c1(3, 4); 
    Complex c2(1, 2);  

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quot = c1 / c2;

    cout << "Sum: "; sum.print();       
    cout << "Difference: "; diff.print();
    cout << "Product: "; prod.print();   
    cout << "Quotient: "; quot.print();  
}
