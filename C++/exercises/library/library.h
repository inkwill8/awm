#include <string>
#include <vector>

class Library {
private:
	std::vector<Book> books;

public:
	void AddBook(Book& book) {}

	std::string SearchByTitle(std::string& title) {}
};
