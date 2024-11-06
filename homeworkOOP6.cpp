#include <iostream>
#include <string>

using namespace std;


// 1 TASK
//class Date {
//public:
//    int day;
//    int month;
//    int year;
//
//    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {
//        adjustDate();
//    }
//
//    void setDate(int d, int m, int y) {
//        day = d;
//        month = m;
//        year = y;
//        adjustDate();
//    }
//
//    void printDate() const {
//        cout << day << "/" << month << "/" << year << endl;
//    }
//
//    bool operator==(const Date& other) const {
//        return day == other.day && month == other.month && year == other.year;
//    }
//
//    bool operator!=(const Date& other) const {
//        return !(*this == other);
//    }
//
//    bool operator<(const Date& other) const {
//        if (year != other.year) return year < other.year;
//        if (month != other.month) return month < other.month;
//        return day < other.day;
//    }
//
//    bool operator>(const Date& other) const {
//        return other < *this;
//    }
//
//    Date& operator++() {
//        day++;
//        adjustDate();
//        return *this;
//    }
//    Date operator++(int) {
//        Date temp = *this;
//        ++(*this);
//        return temp;
//    }
//
//    Date& operator--() {
//        day--;
//        adjustDate();
//        return *this;
//    }
//
//    Date operator--(int) {
//        Date temp = *this;
//        --(*this);
//        return temp;
//    }
//
//    Date& operator+=(int days) {
//        day += days;
//        adjustDate();
//        return *this;
//    }
//
//    Date& operator-=(int days) {
//        day -= days;
//        adjustDate();
//        return *this;
//    }
//
//    Date& operator=(const Date& other) {
//        if (this != &other) {
//            day = other.day;
//            month = other.month;
//            year = other.year;
//        }
//        return *this;
//    }
//
//    void operator()(int d, int m, int y) {
//        setDate(d, m, y);
//    }
//
//    void addOneDay() {
//        ++(*this);
//    }
//
//private:
//    void adjustDate() {
//        int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//            days_in_month[1] = 29;
//
//        while (day > days_in_month[month - 1]) {
//            day -= days_in_month[month - 1];
//            month++;
//            if (month > 12) {
//                month = 1;
//                year++;
//            }
//        }
//
//        while (day <= 0) {
//            month--;
//            if (month <= 0) {
//                month = 12;
//                year--;
//            }
//            day += days_in_month[month - 1];
//        }
//    }
//};


class String {
public:
    String() : str(nullptr), length(0) {}

    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    char& operator[](int index) {
        return str[index];
    }

    int operator()(char c) const {
        for (int i = 0; i < length; i++) {
            if (str[i] == c)
                return i;
        }
        return -1;
    }

    operator int() const {
        return length;
    }

private:
    char* str;
    int length;
};


int main() {
    //1 TASK
    //Date date(31, 12, 2023);
    //cout << "Initial date: ";
    //date.printDate();

    //++date;
    //cout << "After ++date: ";
    //date.printDate();

    //date++;
    //cout << "After date++: ";
    //date.printDate();

    //--date;
    //cout << "After --date: ";
    //date.printDate();

    //date--;
    //cout << "After date--: ";
    //date.printDate();

    //Date anotherDate;
    //anotherDate = date;
    //cout << "Assigned date: ";
    //anotherDate.printDate();
    //cout << "Dates equal? " << (anotherDate == date ? "Yes" : "No") << endl;
    //date += 30;
    //cout << "After adding 30 days: ";
    //date.printDate();

    //date -= 60;
    //cout << "After subtracting 60 days: ";
    //date.printDate();




    String s("Hello, World!");

    cout << "Character at index 7: " << s[7] << endl;

    int index = s('W');
    if (index != -1)
        cout << "Character 'W' found at index: " << index << endl;
    else
        cout << "Character 'W' not found." << endl;

    int length = s;
    cout << "Length of the string: " << length << endl;

    return 0;
}
