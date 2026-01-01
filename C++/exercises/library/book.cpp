#include "book.h"

Book::Book() {
	title = "";
	author = "";
	isbn = "";
	isAvailable = false;
}

Book::Book(std::string title, std::string author, std::string isbn, bool isAvailable) {
	this->title = title;
	this->author = author;
	this->isbn = isbn;
	this->isAvailable = isAvailable;
}

	// getters
	std::string Book::GetTitle() const { return title; }
	std::string Book::GetAuthor() const { return author; }
	std::string Book::GetIsbn() const { return isbn; }
	std::string Book::GetAvailability() const { return isAvailable; }

	// setters
	void Book::SetAvailability(bool isAvailable) { this->isAvailable = isAvailable; }

	// methods
	void Book::CheckOut(Book book) { book.SetAvailability(false); }
	void Book::ReturnBook(Book book) { book.SetAvailability(true); }	

	std::string Book::DisplayBook() {
	bool availableInt = (int)isAvailable;
	std::string availability = availableInt ? "available" : "unavailable";

	return title + " by " + author + " with ISBN " + isbn + " is " + availability;
}
