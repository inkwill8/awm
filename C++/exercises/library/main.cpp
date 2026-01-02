#include <iostream>
#include <string>
#include "book.h"
#include "library.h"

int main() 
{
	Book dune = Book("Dune", "Frank Herbert", "000-458-769", false);
	Book norwegianWood = Book("Norwegian Wood", "Haruki Murakami", "154-009-0746", true);

	Book("1984", "George Orwell", "978-0-452-28423-4", true);
	Book("To Kill a Mockingbird", "Harper Lee", "978-0-061-12008-4", true);
	Book("The Great Gatsby", "F. Scott Fitzgerald", "978-0-743-27356-5", true);
	Book("Pride and Prejudice", "Jane Austen", "978-0-141-43951-8", true);
	Book("The Catcher in the Rye", "J.D. Salinger", "978-0-316-76948-0", true);
	Book("Animal Farm", "George Orwell", "978-0-452-28424-1", true);
	Book("Lord of the Flies", "William Golding", "978-0-399-50148-7", true);
	Book("Brave New World", "Aldous Huxley", "978-0-060-85052-4", true);
	Book("The Hobbit", "J.R.R. Tolkien", "978-0-547-92822-7", true);
	Book("Fahrenheit 451", "Ray Bradbury", "978-1-451-67331-9", true);
	Book("Jane Eyre", "Charlotte Bronte", "978-0-141-44114-6", true);
	Book("Wuthering Heights", "Emily Bronte", "978-0-141-43955-6", true);
	Book("The Odyssey", "Homer", "978-0-140-26886-7", true);
	Book("Crime and Punishment", "Fyodor Dostoevsky", "978-0-486-41587-0", true);
	Book("The Brothers Karamazov", "Fyodor Dostoevsky", "978-0-374-52797-9", true);
	Book("Moby Dick", "Herman Melville", "978-0-142-43720-7", true);
	Book("War and Peace", "Leo Tolstoy", "978-0-143-03999-0", true);
	Book("The Divine Comedy", "Dante Alighieri", "978-0-142-43758-0", true);
	Book("One Hundred Years of Solitude", "Gabriel Garcia Marquez", "978-0-060-88328-8", true);
	Book("The Sound and the Fury", "William Faulkner", "978-0-679-73224-7", true);
	Book("Catch-22", "Joseph Heller", "978-0-684-83339-9", true);
	Book("Slaughterhouse-Five", "Kurt Vonnegut", "978-0-385-33384-9", true);
	Book("Invisible Man", "Ralph Ellison", "978-0-679-73276-6", true);
	Book("Beloved", "Toni Morrison", "978-1-400-03341-6", true);
	Book("The Grapes of Wrath", "John Steinbeck", "978-0-143-03943-3", true);

	std::cout << dune.DisplayInfo() << std::endl;
	std::cout << norwegianWood.DisplayInfo() << std::endl;






}
