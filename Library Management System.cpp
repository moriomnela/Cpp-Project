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
