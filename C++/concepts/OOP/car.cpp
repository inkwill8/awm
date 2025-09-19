#include <string>

class Car { // Used to basically build a data type from scratch

  // Member fields, member variables, attributes, properties
  int year;
  std::string make;
  std::string model;

  public:

    //Constructor
    Car(int _year, std::string _make, std::string _model) {
     year = _year;
     make = _make;
     model = _model;
    }

    // Getters or accessors
    std::string GetDescription() {
      return std::to_string(year) + " " + make + " " + model;
    }

    int GetYear() {
      return year;
    }

    std::string GetMake() {
      return make;
    }

    std::string GetModel() {
      return model;
    }



};
