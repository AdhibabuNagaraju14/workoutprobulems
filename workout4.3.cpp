#include<stdio.h>
class Book:
    def  (self, title, author, price);
        self.title = title
        self.author = author
        self.price = price
books = []
for i in range(5):
    print(f"Enter the information for book {i+1}:")
    title = input("Title: ")
    author = input("Author: ")
    price = float(input("Price: "))
    books.append(Book(title, author, price))
for i, book in enumerate(books):
    print(f"Book {i+1}:")
    print(f"Title: {book.title}")
    print(f"Author: {book.author}")
    print(f"Price: {book.price}")
return 0;


