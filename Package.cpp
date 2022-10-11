#include "Package.h"
#include <iostream>

int Package::ID = 0;

using namespace std;

Package::Package(const string &name, const string &address, const string &city, const string &state, int ZIP, double weight, double cost){
  this->name = name;
  this->address = address;
  this->city = city;
  this->state = state;
  this->ZIP = ZIP;
  try{
    setCostPerOunce(cost);
  }
  catch(double ex)
  {
  cout << "Cost must be > 0" << endl;
  }
  
  try{
    setWeight(weight);
  }
  catch(double ex)
  {
    cout << "Weight must be > 0" << endl;
  }

  Package::ID++;
}

  void Package::setWeight(double weight){
    if(weight <= 0)
    throw weight;


    this->weight = weight;
  }

  void Package::setCostPerOunce(double cost){
    if(cost <= 0)
    throw cost;

    this->cost = cost;
  }

  double Package::calculateCost(){
    return weight * cost;
  }

  void Package::printPackageInfo(){
    cout << "--------------------------------------------" << endl;
    cout << "Package ID " << Package::ID << endl << endl ;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", ";
    cout << state << " " << ZIP << endl << endl;
    cout << "Cost: " << calculateCost() << endl;
    cout << "--------------------------------------------" << endl;
  }