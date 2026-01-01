#include "book.h"

Book::Book(std::string title, std::string author, std::string isbn, bool isAvailable) : 
	title(title), author(author), isbn(isbn), isAvailable(isAvailable)
{ }

Book::Book(std::string title, std::string author, std::string isbn, bool isAvailable)
{
	title = "";
	author = "";
	isbn = "";
	isAvailable = false;
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
