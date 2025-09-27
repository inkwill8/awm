#include <string>
#include <iostream>

class Book {
	// Member fields
	std::string title;
	std::string author;
	std::string isbn;
	bool isAvailable;

	void SetAvailability(bool isAvailable) {
	this->isAvailable = isAvailable;
	}

public:
	Book() {
	title = "";
	author = "";
	isbn = "";
	isAvailable = false;
	}
	
	Book(std::string title, std::string author, std::string isbn, bool isAvailable) {
	this->title = title;
	this->author = author;
	this->isbn = isbn;
	this->isAvailable = isAvailable;
	}

	// Getters
	
	std::string GetTitle() {
	return title;
	}

	std::string GetAuthor() {
	return author;
	}

	std::string GetIsbn() {
	return isbn;
	}

	bool GetAvailability() {
	return isAvailable;
	}

	// Methods
	
	void CheckOut(Book book) {
	book.SetAvailability(false);
	}

	void ReturnBook(Book book) {
	book.SetAvailability(true);
	}	

	std::string DisplayInfo() {
	bool availableInt = (int)isAvailable;
	std::string availability = availableInt ? "available" : "unavailable";

	return title + " by " + author + " with ISBN " + isbn + " is " + availability;
	}


};
