#include <stdio.h>

// Define the book structure
struct Book {
    int bookID;
    char title[50];
    char author[50];
    float price;
};

// Function to print book details
void printBookDetails(struct Book book) {
    printf("Book ID: %d\n", book.bookID);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
}

int main() {
    // Create a book instance
    struct Book myBook;

    // Initialize book details
    myBook.bookID = 101;
    strcpy(myBook.title, "The Great Gatsby");
    strcpy(myBook.author, "F. Scott Fitzgerald");
    myBook.price = 12.99;

    // Call the function to print book details
    printf("Book Details:\n");
    printBookDetails(myBook);

    return 0;
}
