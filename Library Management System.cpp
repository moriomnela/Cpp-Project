#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
using namespace std;

// Structure to store book details
class Book {
public:
    int bookID;
    string title, author, publisher, category;
    bool isAvailable;

    Book(int id, string t, string a, string p, string c) {
        bookID = id;
        title = t;
        author = a;
        publisher = p;
        category = c;
        isAvailable = true;
    }
};
// Structure to store member details
class Member {
public:
    int memberID;
    string name;
    vector<int> borrowedBooks;

    Member(int id, string n) {
        memberID = id;
        name = n;
    }
};
// Main Library Management System
class Library {
private:
    vector<Book> books;
    vector<Member> members;
    map<int, time_t> borrowRecords; // Tracks borrowed books with timestamps
    map<int, string> reviews;

public:
    void registerBook(int id, string title, string author, string publisher, string category) {
        books.push_back(Book(id, title, author, publisher, category));
        cout << "Book Registered Successfully!" << endl;
    }

    void registerMember(int id, string name) {
        members.push_back(Member(id, name));
        cout << "Member Registered Successfully!" << endl;
    }
