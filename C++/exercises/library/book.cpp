#include <string>
#include <iostream>

class Book {
	// Member fields
	std::string title;
	std::string author;
	std::string isbn;
	bool isAvailable;

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

	std::string GetDescription() {
		bool availableInt = (int)isAvailable;
		std::string availability = availableInt ? "available" : "unavailable";

		return title + " by " + author + " with ISBN " + isbn + " is " + availability;
	}

	// Setters
	
	void SetTitle(std::string title) {
	this->title = title;
	}

	void SetAuthor(std::string author) {
	this->author = author;
	}

	void SetIsbn(std::string isbn) {
	this->isbn = isbn;
	}

	void SetAvailability(bool isAvailable) {
	this->isAvailable = isAvailable;
	}

};
