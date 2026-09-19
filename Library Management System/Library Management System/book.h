#pragma once
#include <string>
#include <iostream>
using namespace std;

class Book {
private:
    string name;
    string isbn;
    string publisher;
    double price;
    int pages;
    bool available;
public:
    void borrowBook();
    void returnBook();
    void showInfo();
    Book();
    Book(string n, string i, string p, double pr, int pg,bool av);
};
