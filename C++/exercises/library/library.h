#include <string>
#include <vector>
#include "book.h"

class Library {
private:
	std::vector<Book> books;

public:
	void AddBook(Book& book) {}

	std::string SearchByTitle(std::string& title) {}
};
