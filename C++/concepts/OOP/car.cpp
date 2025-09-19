#include <string>

class Car { // Used to basically build a data type from scratch

  // Member fields, member variables, attributes, properties
  int year;
  std::string make;
  std::string model;
  int mileage;

  public:

    //Constructor
    Car(int _year, std::string _make, std::string _model, int _mileage) {
     year = _year;
     make = _make;
     model = _model;
     mileage = _mileage;
    }

    // Getters or accessors
    std::string GetDescription() {
      return std::to_string(year) + " " + make + " " + model + " " +
        std::to_string(mileage);
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

    int GetMileage() {
      return mileage;
    }

    // Setters or mutators
    void SetYear(int _year) {
      if (year > 1900) {
        year = _year;
      }
    }

    void SetMake(std::string _make) {
      if (_make != "") {
        make = _make;
      }
    }

    void SetModel(std::string _model) {
      if (_model!= "") {
        model= _model;
      }
    }
    
    void SetMileage(int _mileage) {
      if (_mileage > 0) {
        mileage = _mileage;
      }
    } 
};
