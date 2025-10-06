#include <iostream>

void Bats(int i)
{

    if (i < 100)
    {
        std::cout << (char)78 << (char)65 << ' ';
        i++;
        Bats(i);
    }
    
}

int main()
{

    Bats(0);
    std::cout << std::endl;

}