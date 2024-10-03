#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    char str[MAX];

    cout << "Enter a string: ";
    cin.getline(str, MAX);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int index;
    cout << "Enter index of the character to delete: ";
    cin >> index;

    if (index >= 0 && index < len) {
        for (int i = index; i < len - 1; i++) {
            str[i] = str[i + 1];
        }
        str[len - 1] = '\0';
        len--;
    }
    cout << "After deleting character at index " << index << ": " << str << endl;

    char ch;
    cout << "Enter the character to delete: ";
    cin >> ch;
    cin.ignore();

    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            for (int j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
    str[len] = '\0';
    cout << "After deleting all occurrences of '" << ch << "': " << str << endl;

    char ch_insert;
    int index_insert;
    cout << "Enter the character to insert: ";
    cin >> ch_insert;
    cout << "Enter the position to insert the character: ";
    cin >> index_insert;

    if (index_insert >= 0 && index_insert <= len) {
        for (int i = len; i > index_insert; i--) {
            str[i] = str[i - 1];
        }
        str[index_insert] = ch_insert;
        str[len + 1] = '\0';
        len++;
    }
    cout << "After inserting '" << ch_insert << "' at index " << index_insert << ": " << str << endl;

    for (int i = 0; i < len; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
    cout << "After replacing all dots with exclamations: " << str << endl;

    char ch_count;
    cout << "Enter the character to count: ";
    cin >> ch_count;
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == ch_count) {
            count++;
        }
    }
    cout << "The character '" << ch_count << "' occurs " << count << " times in the string." << endl;

    int letters = 0, digits = 0, others = 0;
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }
    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other symbols: " << others << endl;


}
