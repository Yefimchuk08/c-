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

//part 2 

struct Book {
    string title;
    string author;
    string publisher;
    string genre;

    void print() const {
        cout << "Title: " << title << "\n"
            << "Author: " << author << "\n"
            << "Publisher: " << publisher << "\n"
            << "Genre: " << genre << "\n"
            << "--------------------------" << endl;
    }
};

void editBook(Book& book) {
    cout << "Editing book: " << book.title << "\n";
    cout << "Enter new title: ";
    getline(cin, book.title);
    cout << "Enter new author: ";
    getline(cin, book.author);
    cout << "Enter new publisher: ";
    getline(cin, book.publisher);
    cout << "Enter new genre: ";
    getline(cin, book.genre);
}

void searchByAuthor(const Book books[], int size, const string& author) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (books[i].author == author) {
            books[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "No books found by author " << author << ".\n";
    }
}

void searchByTitle(const Book books[], int size, const string& title) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (books[i].title == title) {
            books[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "No book found with title " << title << ".\n";
    }
}

void printAllBooks(const Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        books[i].print();
    }
}

void sortByTitle(Book books[], int size) {
    sort(books, books + size, [](const Book& a, const Book& b) {
        return a.title < b.title;
        });
}

void sortByAuthor(Book books[], int size) {
    sort(books, books + size, [](const Book& a, const Book& b) {
        return a.author < b.author;
        });
}

void sortByPublisher(Book books[], int size) {
    sort(books, books + size, [](const Book& a, const Book& b) {
        return a.publisher < b.publisher;
        });
}



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

    //part 2

    const int SIZE = 10;
    Book library[SIZE] = {
        {"Harry Potter", "J.K. Rowling", "Bloomsbury", "Fantasy"},
        {"1984", "George Orwell", "Signet Classics", "Dystopia"},
        {"The Master and Margarita", "Mikhail Bulgakov", "AST", "Classic"},
        {"The Little Prince", "Antoine de Saint-Exupéry", "Gallimard", "Fantasy"},
        {"Crime and Punishment", "Fyodor Dostoevsky", "AST", "Classic"},
        {"Les Misérables", "Victor Hugo", "AST", "Historical Novel"},
        {"Roadside Picnic", "Arkady and Boris Strugatsky", "AST", "Science Fiction"},
        {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner", "Classic"},
        {"One Hundred Years of Solitude", "Gabriel García Márquez", "Sudamericana", "Magical Realism"},
        {"War and Peace", "Leo Tolstoy", "AST", "Historical Novel"}
    };

    int choice;
    do {
        cout << "\nMenu:\n"
            << "1. Print all books\n"
            << "2. Search book by author\n"
            << "3. Search book by title\n"
            << "4. Edit book\n"
            << "5. Sort by book title\n"
            << "6. Sort by author\n"
            << "7. Sort by publisher\n"
            << "0. Exit\n"
            << "Your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            printAllBooks(library, SIZE);
            break;
        case 2: {
            string author;
            cout << "Enter author: ";
            getline(cin, author);
            searchByAuthor(library, SIZE, author);
            break;
        }
        case 3: {
            string title;
            cout << "Enter book title: ";
            getline(cin, title);
            searchByTitle(library, SIZE, title);
            break;
        }
        case 4: {
            int index;
            cout << "Enter book index to edit (0-9): ";
            cin >> index;
            cin.ignore();
            if (index >= 0 && index < SIZE) {
                editBook(library[index]);
            }
            else {
                cout << "Invalid index.\n";
            }
            break;
        }
        case 5:
            sortByTitle(library, SIZE);
            cout << "Books sorted by title.\n";
            break;
        case 6:
            sortByAuthor(library, SIZE);
            cout << "Books sorted by author.\n";
            break;
        case 7:
            sortByPublisher(library, SIZE);
            cout << "Books sorted by publisher.\n";
            break;
        case 0:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 0);

}
