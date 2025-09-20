#include <iostream>
#include "car.cpp"
#include <vector>

int main()
{
  // Instantiating car objects with the Car overloaded constructor
  Car nissan240sx = Car(1992, "Nissan", "240sx", 30000);
  Car fordF150(2025, "Ford", "F-150", 5);
  Car hondaCivic = Car(2020, "Honda", "Civic", 70000);

  // Outputting data to the console
  std::cout << nissan240sx.GetDescription() << " miles" << std::endl;
  std::cout << fordF150.GetDescription() << " miles" << std::endl;
  std::cout << hondaCivic.GetDescription() << " miles" << std::endl;

}
