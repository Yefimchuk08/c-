#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//void compareFiles(const string& file1, const string& file2) {
//    ifstream f1(file1);
//    ifstream f2(file2);
//
//    if (!f1.is_open() || !f2.is_open()) {
//        cerr << "Invalid open file" << endl;
//        return;
//    }
//
//    string line1, line2;
//    int lineNumber = 1;
//    bool filesMatch = true;
//
//    while (getline(f1, line1) || getline(f2, line2)) {
//        // якщо один файл зак≥нчивс€, але ≥нший ще маЇ р€дки
//        if (!f1 && f2 || f1 && !f2) {
//            filesMatch = false;
//        }
//
//        // якщо р€дки не зб≥гаютьс€
//        if (line1 != line2) {
//            filesMatch = false;
//            cout << "Line " << lineNumber << ":\n";
//            cout << "File1: " << line1 << "\n";
//            cout << "file2: " << line2 << "\n\n";
//        }
//
//        lineNumber++;
//        line1.clear();
//        line2.clear();
//    }
//
//    if (filesMatch) {
//        cout << "File is identical" << endl;
//    }
//
//    f1.close();
//    f2.close();
//}

//Task 2

//bool isVowel(char c) {
//    c = tolower(c);
//    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//}

//void analyzeFile(const string& inputFile, const string& outputFile) {
//    ifstream fin(inputFile);
//    ofstream fout(outputFile);
//
//    if (!fin.is_open()) {
//        cerr << "Failed to open the input file!" << endl;
//        return;
//    }
//
//    if (!fout.is_open()) {
//        cerr << "Failed to open the output file!" << endl;
//        return;
//    }
//
//    int charCount = 0;
//    int lineCount = 0;
//    int vowelCount = 0;
//    int consonantCount = 0;
//    int digitCount = 0;
//
//    string line;
//    while (getline(fin, line)) {
//        lineCount++;
//
//        for (char c : line) {
//            if (isalpha(c)) {
//                charCount++;
//                if (isVowel(c)) {
//                    vowelCount++;
//                }
//                else {
//                    consonantCount++;
//                }
//            }
//            else if (isdigit(c)) {
//                digitCount++;
//                charCount++;
//            }
//            else if (!isspace(c)) {
//                charCount++;
//            }
//        }
//    }
//
//    fout << "Number of characters: " << charCount << endl;
//    fout << "Number of lines: " << lineCount << endl;
//    fout << "Number of vowels: " << vowelCount << endl;
//    fout << "Number of consonants: " << consonantCount << endl;
//    fout << "Number of digits: " << digitCount << endl;
//
//    fin.close();
//    fout.close();
//}

//Task 3
//char caesarCipher(char c, int key) {
//    if (isalpha(c)) {
//        char base = islower(c) ? 'a' : 'A';
//        return (c - base + key) % 26 + base;
//    }
//    return c;
//}
//
//void encryptFile(const string& inputFile, const string& outputFile, int key) {
//    ifstream fin(inputFile);
//    ofstream fout(outputFile);
//
//    if (!fin.is_open()) {
//        cerr << "Failed to open the input file!" << endl;
//        return;
//    }
//
//    if (!fout.is_open()) {
//        cerr << "Failed to open the output file!" << endl;
//        return;
//    }
//
//    char c;
//    while (fin.get(c)) {
//        fout << caesarCipher(c, key);
//    }
//
//    fin.close();
//    fout.close();
//}

//part 2

//struct Book {
//    string title;
//    string author;
//    string publisher;
//    string genre;
//};
//
//void printBooks(Book books[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << "Book " << (i + 1) << ":" << endl;
//        cout << "Title: " << books[i].title << endl;
//        cout << "Author: " << books[i].author << endl;
//        cout << "Publisher: " << books[i].publisher << endl;
//        cout << "Genre: " << books[i].genre << endl;
//        cout << "---------------------" << endl;
//    }
//}
//
//void editBook(Book& book) {
//    cout << "Edit Book" << endl;
//    cout << "Enter new title: ";
//    getline(cin, book.title);
//    cout << "Enter new author: ";
//    getline(cin, book.author);
//    cout << "Enter new publisher: ";
//    getline(cin, book.publisher);
//    cout << "Enter new genre: ";
//    getline(cin, book.genre);
//}
//
//void searchByAuthor(Book books[], int size, const string& author) {
//    cout << "Books by " << author << ":" << endl;
//    for (int i = 0; i < size; i++) {
//        if (books[i].author == author) {
//            cout << "Title: " << books[i].title << endl;
//        }
//    }
//}
//
//void searchByTitle(Book books[], int size, const string& title) {
//    cout << "Books titled " << title << ":" << endl;
//    for (int i = 0; i < size; i++) {
//        if (books[i].title == title) {
//            cout << "Author: " << books[i].author << endl;
//        }
//    }
//}
//
//void sortBooksByTitle(Book books[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (books[i].title > books[j].title) {
//                swap(books[i], books[j]);
//            }
//        }
//    }
//}
//
//void sortBooksByAuthor(Book books[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (books[i].author > books[j].author) {
//                swap(books[i], books[j]);
//            }
//        }
//    }
//}
//
//void sortBooksByPublisher(Book books[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (books[i].publisher > books[j].publisher) {
//                swap(books[i], books[j]);
//            }
//        }
//    }
//}

int main() {
    //string file1 = "file1.txt";
    //string file2 = "file2.txt";

    //compareFiles(file1, file2);


    //string inputFile = "input.txt";
    //string outputFile = "output.txt";

    //analyzeFile(inputFile, outputFile);


    //string inputFile = "input.txt";
    //string outputFile = "output.txt";
    //int key = 3;

    //encryptFile(inputFile, outputFile, key);

    //cout << "File successfully encrypted." << endl;





    //const int size = 10;
    //Book books[size];

    //for (int i = 0; i < size; i++) {
    //    cout << "Enter details for book " << (i + 1) << ":" << endl;
    //    cout << "Title: ";
    //    getline(cin, books[i].title);
    //    cout << "Author: ";
    //    getline(cin, books[i].author);
    //    cout << "Publisher: ";
    //    getline(cin, books[i].publisher);
    //    cout << "Genre: ";
    //    getline(cin, books[i].genre);
    //    cout << "---------------------" << endl;
    //}

    //while (true) {
    //    cout << "Library Menu:" << endl;
    //    cout << "1. Print all books" << endl;
    //    cout << "2. Edit a book" << endl;
    //    cout << "3. Search for a book by author" << endl;
    //    cout << "4. Search for a book by title" << endl;
    //    cout << "5. Sort books by title" << endl;
    //    cout << "6. Sort books by author" << endl;
    //    cout << "7. Sort books by publisher" << endl;
    //    cout << "8. Exit" << endl;
    //    cout << "Choose an option: ";
    //    int choice;
    //    cin >> choice;
    //    cin.ignore();

    //    switch (choice) {
    //    case 1:
    //        printBooks(books, size);
    //        break;
    //    case 2: {
    //        int index;
    //        cout << "Enter book index to edit (1 to 10): ";
    //        cin >> index;
    //        cin.ignore();
    //        if (index < 1 || index > size) {
    //            cout << "Invalid index." << endl;
    //        }
    //        else {
    //            editBook(books[index - 1]);
    //        }
    //        break;
    //    }
    //    case 3: {
    //        string author;
    //        cout << "Enter author name: ";
    //        getline(cin, author);
    //        searchByAuthor(books, size, author);
    //        break;
    //    }
    //    case 4: {
    //        string title;
    //        cout << "Enter book title: ";
    //        getline(cin, title);
    //        searchByTitle(books, size, title);
    //        break;
    //    }
    //    case 5:
    //        sortBooksByTitle(books, size);
    //        cout << "Books sorted by title." << endl;
    //        break;
    //    case 6:
    //        sortBooksByAuthor(books, size);
    //        cout << "Books sorted by author." << endl;
    //        break;
    //    case 7:
    //        sortBooksByPublisher(books, size);
    //        cout << "Books sorted by publisher." << endl;
    //        break;
    //    case 8:
    //        return 0;
    //    default:
    //        cout << "Invalid choice." << endl;
    //    }
    //}
}
