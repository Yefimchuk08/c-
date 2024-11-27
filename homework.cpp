#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class Equation {
public:
    virtual void solve() = 0;
    virtual ~Equation() {}
};

class LinearEquation : public Equation {
private:
    double a, b;
public:
    LinearEquation(double a, double b) : a(a), b(b) {}

    void solve() override {
        if (a == 0) {
            if (b == 0)
                cout << "Infinite solutions." << endl;
            else
                cout << "No solutions." << endl;
        }
        else {
            double x = -b / a;
            cout << "Root of the equation: x = " << x << endl;
        }
    }
};

class QuadraticEquation : public Equation {
private:
    double a, b, c;
public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    void solve() override {
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0)
            cout << "No solutions." << endl;
        else if (discriminant == 0) {
            double x = -b / (2 * a);
            cout << "One root: x = " << x << endl;
        }
        else {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots of the equation: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
};

class Shape {
public:
    virtual void show() = 0;
    virtual void save(const string& filename) = 0;
    virtual void load(const string& filename) = 0;
    virtual ~Shape() {}
};

class Square : public Shape {
private:
    double x, y, side;
public:
    Square(double x, double y, double side) : x(x), y(y), side(side) {}

    void show() override {
        cout << "Square: top-left corner (" << x << ", " << y << "), side = " << side << endl;
    }

    void save(const string& filename) override {
        ofstream out(filename, ios::app);
        out << "Square " << x << " " << y << " " << side << endl;
        out.close();
    }

    void load(const string& filename) override {
        ifstream in(filename);
        in >> x >> y >> side;
        in.close();
    }
};

class Rectangle : public Shape {
private:
    double x, y, width, height;
public:
    Rectangle(double x, double y, double width, double height) : x(x), y(y), width(width), height(height) {}

    void show() override {
        cout << "Rectangle: top-left corner (" << x << ", " << y << "), width = " << width << ", height = " << height << endl;
    }

    void save(const string& filename) override {
        ofstream out(filename, ios::app);
        out << "Rectangle " << x << " " << y << " " << width << " " << height << endl;
        out.close();
    }

    void load(const string& filename) override {
        ifstream in(filename);
        in >> x >> y >> width >> height;
        in.close();
    }
};

class Circle : public Shape {
private:
    double cx, cy, radius;
public:
    Circle(double cx, double cy, double radius) : cx(cx), cy(cy), radius(radius) {}

    void show() override {
        cout << "Circle: center (" << cx << ", " << cy << "), radius = " << radius << endl;
    }

    void save(const string& filename) override {
        ofstream out(filename, ios::app);
        out << "Circle " << cx << " " << cy << " " << radius << endl;
        out.close();
    }

    void load(const string& filename) override {
        ifstream in(filename);
        in >> cx >> cy >> radius;
        in.close();
    }
};

class Ellipse : public Shape {
private:
    double x, y, width, height;
public:
    Ellipse(double x, double y, double width, double height) : x(x), y(y), width(width), height(height) {}

    void show() override {
        cout << "Ellipse: top-left corner (" << x << ", " << y << "), width = " << width << ", height = " << height << endl;
    }

    void save(const string& filename) override {
        ofstream out(filename, ios::app);
        out << "Ellipse " << x << " " << y << " " << width << " " << height << endl;
        out.close();
    }

    void load(const string& filename) override {
        ifstream in(filename);
        in >> x >> y >> width >> height;
        in.close();
    }
};

int main() {
    cout << "Solving equations" << endl;
    Equation* eq1 = new LinearEquation(2, -4);
    eq1->solve();

    Equation* eq2 = new QuadraticEquation(1, -3, 2);
    eq2->solve();

    delete eq1;
    delete eq2;

    cout << "Shapes" << endl;
    Shape* shapes[4];
    shapes[0] = new Square(0, 0, 5);
    shapes[1] = new Rectangle(0, 0, 4, 6);
    shapes[2] = new Circle(3, 3, 2);
    shapes[3] = new Ellipse(1, 1, 3, 5);

    for (int i = 0; i < 4; i++) {
        shapes[i]->show();
    }

    string filename = "shapes.txt";
    for (int i = 0; i < 4; i++) {
        shapes[i]->save(filename);
    }

    cout << "\nReading shapes from file:" << endl;
    for (int i = 0; i < 4; i++) {
        shapes[i]->load(filename);
        shapes[i]->show();
    }

    for (int i = 0; i < 4; i++) {
        delete shapes[i];
    }


}
