#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book {
    char title[50];
    char author[50];
    int pubYear;
    float price;
};
void displayBooks(struct book *books, int numBooks) {
    printf("Books published after 2010:\n");
    for (int i = 0; i < numBooks; i++) {
        if (books[i].pubYear > 2010) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publication year: %d\n", books[i].pubYear);
            printf("Price: $%.2f\n\n", books[i].price);
        }
    }
}
int main() {
    struct book books[5] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 9.99},
        {"To Kill a Mockingbird", "Harper Lee", 1960, 12.99},
        {"The Hunger Games", "Suzanne Collins", 2008, 8.99},
        {"1984", "George Orwell", 1949, 10.99},
        {"The Girl with the Dragon Tattoo", "Stieg Larsson", 2005, 11.99}
    };
    displayBooks(books, 5);
    return 0;
}

