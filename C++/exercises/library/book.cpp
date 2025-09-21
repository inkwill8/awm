

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



};
