#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct Book {
	string author;
	string title;
	string genre;
	string publisher;
	int year;
	int price;
	int pages;
	double rating;
};



void showBook(Book book)
{
	cout << endl;
	cout << "Author: " << book.author << endl;
	cout << "Title: " << book.title << endl;
	cout << "Genre: " << book.genre << endl;
	cout << "Publisher: " << book.publisher << endl;
	cout << "Year: " << endl;
	cout << "Price: " << endl;
	cout << "Pages: " << endl;
	cout << "Rating: " << endl;
}

void FillBook(Book &book)
{
	cout << "Enter author: ";
	cin.ignore();
	getline(cin, book.author);
	cout << "Enter title: ";
	getline(cin, book.title);
	cout << "Enter genre: ";
	getline(cin, book.genre);
	cout << "Enter publisher: ";
	getline(cin, book.publisher);
	cout << "Enter year: ";
	cin >> book.year;
	cout << "Enter price: ";
	cin >> book.price;
	cout << "Enter pages: ";
	cin >> book.pages;
	cout << "Enter rating: ";
	cin >> book.rating;
}

void LoadFromFile(vector<Book>&books, const string &filename)
{
	ifstream file(filename);
	if (file.is_open())
	{
		books.clear();
		string line;
		while(getline(file, line))
		{
			Book book;
			rsize_t pos = 0;

			pos = line.find(",");
			book.author = line.substr(0, pos);
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.title = line.substr(0, pos);
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.genre = line.substr(0, pos);
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.publisher = line.substr(0, pos);
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.year = stoi(line.substr(0, pos));
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.price = stoi(line.substr(0, pos));
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.pages = stoi(line.substr(0, pos));
			line.erase(0, pos + 1);

			pos = line.find(",");
			book.rating = stoi(line.substr(0, pos));
			line.erase(0, pos + 1);

		}
	}
}

void SaveToFile(const vector<Book>& books, const string& path)
{
	ofstream file(path, ios::app);
	if (file.is_open()) {
		for (auto book : books)
		{
			file << book.author << ", " << book.title << ", " << book.genre << ", " << book.publisher << ", " << book.year << ", " << book.price << ", " << book.pages << ", " << book.rating << endl;
		}
		file.close();
		cout << "Data save to file!" << endl;
	}
	else {
		cout << "Invalid open file!!!!" << endl;
	}
}

void ShowBooks(const vector<Book>& books)
{
	cout << "Books: " << endl;
	for (auto book : books)
	{
		showBook(book);
	}
	cout << "**********************************************************" << endl;
}

void searchByAuthor(const vector<Book>& books, string author)
{
	for (auto book : books)
	{
		if (book.author == author)
		{
			showBook(book);
		}
	}
}

void searchByTitle(const vector<Book>& books, string title)
{
	for (auto book : books)
	{
		if (book.title == title)
		{
			showBook(book);
		}
	}
}
void searchByGenre(const vector<Book>& books, string genre)
{
	for (auto book : books)
	{
		if (book.genre == genre)
		{
			showBook(book);
		}
	}
}

void searchByPublisher(const vector<Book>& books, string publisher)
{
	for (auto book : books)
	{
		if (book.publisher == publisher)
		{
			showBook(book);
		}
	}
}

void searchByYear(const vector<Book>& books, int year)
{
	for (auto book : books)
	{
		if (book.year == year)
		{
			showBook(book);
		}
	}
}

void searchByPrice(const vector<Book>& books, int price)
{
	for (auto book : books)
	{
		if (book.price == price)
		{
			showBook(book);
		}
	}
}

void searchByPages(const vector<Book>& books, int pages)
{
	for (auto book : books)
	{
		if (book.pages == pages)
		{
			showBook(book);
		}
	}
}

void searchByRating(const vector<Book>& books, double rating)
{
	for (auto book : books)
	{
		if (book.rating == rating)
		{
			showBook(book);
		}
	}
}

void SubMenu(const vector<Book> &books)
{
	int choise1;
	cout << "[1] - Show by author; \n[2] - Show by title; \n[3] - Show genre; \n[4] - Show by publisher; \n[5] - Show by year; \n[6] - Show by price; \n[7] - Show by pages; \n[8] - Show by rating;" << endl;
	cout << "Whar ypur choise: ";
	cin >> choise1;
	string author, title, genre, publisher;
	int year, price, pages;
	double rating;
	switch(choise1)
	{
	case 1:
		cout << "Enter author: ";
		getline(cin, author);
		searchByAuthor(books, author);
		break;
	case 2:
		cout << "Enter title: ";
		getline(cin, title);
		searchByTitle(books, title);
		break;
	case 3:
		cout << "Enter genre: ";
		getline(cin, genre);
		searchByGenre(books, genre);
		break;
	case 4:
		cout << "Enter publisher: ";
		getline(cin, publisher);
		searchByPublisher(books, publisher);
		break;
	case 5:
		cout << "Enter year: ";
		cin >> year;
		searchByYear(books, year);
		break;
	case 6:
		cout << "Enter price: ";
		cin >> price;
		searchByPrice(books, price);
		break;
	case 7: 
		cout << "Enter pages: ";
		cin >> pages;
		searchByPages(books, pages);
		break;
	case 8:
		cout << "Enter rating: ";
		cin >> rating;
		searchByRating(books, rating);
		break;
	default:
		break;
	}
}

void Menu()
{
	vector<Book> books;
	string filename = "books.txt";
	Book MyBook;
	int choise;
	cout << "[1] - Show book; \n[2] - Fill book; \n[3] - Load from file and show; \n[4] - Search;" << endl;
	cout << "Enter your choise: ";
	cin >> choise;
	switch (choise)
	{
	case 1:
		ShowBooks(books);
		break;
	case 2:
		FillBook(MyBook);
		books.push_back(MyBook);
		SaveToFile(books, filename);
		break;
	case 3:
		LoadFromFile(books, filename);
		ShowBooks(books);
		break;
	case 4: 
		SubMenu(books);
	default:
		break;
	}
}

int main()
{
	Menu();

}