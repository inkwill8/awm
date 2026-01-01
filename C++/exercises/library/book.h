#include <string>
#include <iostream>

class Book {
private:
	// Member fields
	std::string title;
	std::string author;
	std::string isbn;
	bool isAvailable;

public:
	Book(std::string title, std::string author, std::string isbn, bool isAvailable) {}

	// Getters
	std::string GetTitle() const {}
	std::string GetAuthor() const {}
	std::string GetIsbn() const {}
	bool GetAvailability() const {}

	// Methods
	void SetAvailability(bool isAvailable) {}
	void CheckOut() {}
	void ReturnBook() {}	
	std::string DisplayInfo() {}


};
