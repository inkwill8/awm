#include <iostream>
#include <vector>
#include <string>

int main()
{
    // TODO: Create an array with a size, but no data
    int array[4];

    // TODO: Add data to an array
    array[0] = 5;
    array[1] = 7;

    // TODO: Retrieve data from an array
    std::string names[4] = { "Frodo", "Gandalf", "Morgoth", "Fingolfin" };
    std::cout << "Names index 3 is: " << names[3];

    // TODO: Initialize an array with data

    // TODO: Create a vector with no size or data
    std::vector<int> numbers;

    // TODO: Add data to a vector using the push_back() method
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(9);

    // TODO: Retrieve data from a vector using array syntax
    std::cout << "\n\n" << "Numbers index 1 is " << numbers[1] << std::endl;

    // TODO: Retrieve data from a vector using the at() method
    std::cout << "\n" << "Numbers index 2 is " << numbers.at(2) << std::endl;

    // TODO: Use the size() method to retrieve the size of the vector
    std::cout << "\nThe size of numbers is " << numbers.size() << std::endl;
    std::cout << std::endl;

    // TODO: Use a for loop, along with the size() method, to loop through a vector
    std::vector<std::string> langs = { "JavaScript", "Ruby", "C++", "Python", "Go", "Lua" };
    langs.push_back("Rust");
    langs.push_back("Kotlin");

    for (int i = 0; i < langs.size(); i++) {
        std::cout << i + 1 << ". " << langs.at(i) << std::endl; // Could also use array syntax [] to iterate over.
        if (langs[i] == "Ruby") {
            std::cout << "This one's my favorite!" << std::endl;
        }
    }


    // TODO: Use a for loop range as a for-each loop to loop through a vector
    int pi = (int)3.14;

    std::vector<int> data = { 420, 69, pi, 8, 56 };

    for (int datum : data) { // For each datum in data.. do something
        std::cout << "\n\n" << datum << std::endl;
    }
}