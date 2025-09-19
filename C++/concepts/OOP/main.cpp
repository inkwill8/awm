#include <iostream>
#include "car.cpp"
#include <vector>

int main()
{
  Car nissan240sx = Car(1992, "Nissan", "240sx", 30000);
  std::cout << nissan240sx.GetDescription() << std::endl;

  Car fordF150(2025, "Ford", "F-150", 5);
  std::vector<int> numbers(5);

  std::cout << fordF150.GetDescription() << std::endl;

}
