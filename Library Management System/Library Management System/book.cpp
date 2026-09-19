#include "book.h"
void Book::borrowBook() {
	if (available) {
		available = false;
		cout << "You have borrowed the book: " << name << endl;
	} else {
		cout << "Sorry, the book: " << name << " is currently not available." << endl;
	}
}
void Book::returnBook() {
	if (!available) {
		available = true;
		cout << "You have returned the book: " << name << endl;
	} else {
		cout << "The book: " << name << " was not borrowed." << endl;
	}
}
void Book::showInfo() {
	cout << "Book Name: " << name << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Price: $" << price << endl;
	cout << "Pages: " << pages << endl;
	cout << "Availability: " << (available ? "Available" : "Not Available") << endl;
}
Book::Book()
{
	name = "name";
	isbn = "isbn";
	publisher = "publisher";
	price = 0.0;
	pages = 0;
	available = true;
	cout<< "Default constructor called for book: " << name << endl;
}
Book::Book(string n, string i, string p, double pr, int pg, bool av)
{
	this->name = n;
	this->isbn = i;
	this->publisher = p;
	this->price = pr;
	this->pages = pg;
	this->available = av;
}