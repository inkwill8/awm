#include <iostream>
#include <string>
#include "book.cpp"

int main() 
{
	Book dune = Book("Dune", "Frank Herbert", "000-458-769", false);
	Book norwegianWood = Book("Norwegian Wood", "Haruki Murakami", "154-009-0746", true);

	std::cout << dune.GetDescription() << std::endl;
	std::cout << norwegianWood.GetDescription() << std::endl;






}
