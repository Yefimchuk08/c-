#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileHandler {
public:
    virtual ~FileHandler() {}

    virtual void Display(const char* path) {
        ifstream file(path);
        if (!file.is_open()) {
            cerr << "Unable to open file: " << path << endl;
            return;
        }

        cout << "File content:" << endl;
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
};

class AsciiFileHandler : public FileHandler {
public:
    void Display(const char* path) override {
        ifstream file(path);
        if (!file.is_open()) {
            cerr << "Unable to open file: " << path << endl;
            return;
        }

        cout << "File content as ASCII codes:" << endl;
        char ch;
        while (file.get(ch)) {
            cout << static_cast<int>(ch) << " ";
        }
        cout << endl;
        file.close();
    }
};

class BinaryFileHandler : public FileHandler {
public:
    void Display(const char* path) override {
        ifstream file(path, ios::binary);
        if (!file.is_open()) {
            cerr << "Unable to open file: " << path << endl;
            return;
        }

        cout << "File content as binary:" << endl;
        char ch;
        while (file.get(ch)) {
            for (int i = 7; i >= 0; --i) {
                cout << ((ch >> i) & 1);
            }
            cout << " ";
        }
        cout << endl;
        file.close();
    }
};

int main() {
    const char* filePath = "example.txt";

    FileHandler baseHandler;
    AsciiFileHandler asciiHandler;
    BinaryFileHandler binaryHandler;

    cout << "Base class output:" << endl;
    baseHandler.Display(filePath);

    cout << "\nASCII Handler output:" << endl;
    asciiHandler.Display(filePath);

    cout << "\nBinary Handler output:" << endl;
    binaryHandler.Display(filePath);
}
