#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Tel_Book
{
    string PIB;
    long homephone;
    long workphone;
    string plusinfo;
public:
    Tel_Book()
    {
        PIB = "No PIB";
        homephone = 0;
        workphone = 0;
        plusinfo = "No plusinfo";
    }
    Tel_Book(string newPIB)
    {
        PIB = newPIB;
        homephone = 0;
        workphone = 0;
        plusinfo = "No plusinfo";
    }
    Tel_Book(string newPIB, long newhomephone):Tel_Book{newPIB}
    {
        homephone = newhomephone;
        workphone = 0;
        plusinfo = "No plusinfo";
    }
    Tel_Book(string newPIB, long newhomephone, long newworkphone):Tel_Book{newPIB, newhomephone}
    {
        workphone = newworkphone;
        plusinfo = "No plusinfo";
    }
    Tel_Book(string newPIB, long newhomephone, long newworkphone, string newplusinfo):Tel_Book{newPIB, newhomephone, newworkphone}
    {
        plusinfo = newplusinfo;
    }
    void Fill() {
        cout << "Enter PIB: ";
        cin.ignore();
        getline(cin, PIB);
        cout << "Enter Home number phone: ";
        cin >> homephone;
        cout << "Enter Work number phone: ";
        cin >> workphone;
        cout << "Enter some info about you: ";
        getline(cin, plusinfo);
    }
    void Show()
    {
        cout << "PIB: " << PIB << endl;
        cout << "Home number phone: " << homephone << endl;
        cout << "Work number phone: " << workphone << endl;
        cout << "More information: " << plusinfo << endl;
    }
    void SaveToFile(const vector<Tel_Book>books, const string& path)
    {
        ofstream file(path, ios::app);
        if (file.is_open())
        {
            for (auto book : books)
            {
                file << book.PIB << ", " << book.homephone << ", " << book.workphone << ", " << book.plusinfo << endl;
            }
            file.close();
            cout << "Data save to file" << endl;
        }
        else {
            cout << "Invalid open file!!!!!" << endl;
        }
    }
    void LoadFromFile(vector<Tel_Book>& books, const string& filename)
    {
        ifstream file(filename);
        if (file.is_open()) {
            books.clear();
            string line;
            while (getline(file, line))
            {
                Tel_Book book;
                rsize_t pos = 0;

                pos = line.find(",");
                book.PIB = line.substr(0, pos);
                line.erase(0, pos + 1);

                pos = line.find(",");
                book.homephone = stol(line.substr(0, pos));
                line.erase(0, pos + 1);

                pos = line.find(",");
                book.workphone = stoi(line.substr(0, pos));
                line.erase(0, pos + 1);

                pos = line.find(",");
                book.plusinfo = line.substr(0, pos);
                line.erase(0, pos + 1);
}
            }
    }
    void Show_Tel_Books(const string & filename)
    
        {
            vector<Tel_Book> books;
            LoadFromFile(books, filename);
            cout << "Humans: " << endl;
            for (const auto& book : books)
            {
                Show();
            }

        } 
    void searchByPIB(const vector<Tel_Book> books, string PIB)
    {
        for (auto book : books)
        {
            if (book.PIB == PIB);
            {
                Show();
            }
        }
    }
};

void Menu()
{
    vector<Tel_Book> books;
    string filename = "tel_book.txt";
    Tel_Book book;
    int choise;
    string PIB;
    while (true)
    {
        system("cls");
        cout << "[1] - Fill human;\n[2] - Load from file and show;\n[3] = Search;\n[4] - Exit" << endl;
        cout << "What ypur choise: ";
        cin >> choise;
        switch (choise)
        {
        case 1:
            book.Fill();
            books.push_back(book);
            book.SaveToFile(books, filename);
            break;
        case 2:
            book.LoadFromFile(books, filename);
            book.Show_Tel_Books(filename);
            break;
        case 3:
            cout << "Enter PIB: ";
            getline(cin, PIB);
            book.searchByPIB(books, PIB);
            break;
        case 5:
            cout << "Good Bye" << endl;
            break;
        default:
            cout << "We haven`t any numbers yet" << endl;
            break;
        }
    }
}

int main()
{

    Menu();

}