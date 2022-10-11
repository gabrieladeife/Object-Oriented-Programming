#include "TwoDayPackage.h"

#include <iostream>
using namespace std;

TwoDayPackage::TwoDayPackage(const std::string &name, const std::string address, const std::string &city, const std::string &state, int ZIP, double w,double cost, double fee) : Package(name,  address, city, state, ZIP, w, cost)
{
this->name = name;
  this->address = address;
  this->city = city;
  this->state = state;
  this->ZIP = ZIP;
  this->weight = w;
  this->cost = cost;
  try{
    setFlatFee(fee);
  }
  catch(double ex){
    cout << "Fee must be > 0" << endl;
  }
}

void TwoDayPackage::setFlatFee(double fee){
  if (fee < 0) 
  throw fee;
  
  flatFee = fee;
}

double TwoDayPackage::calculateCost(){
  return flatFee + Package::calculateCost();
}

 void TwoDayPackage::printPackageInfo(){
    cout << "--------------------------------------------" << endl;
    cout << "Two Day Package ID " << Package::ID << endl << endl ;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", ";
    cout << state << " " << ZIP << endl << endl;
    cout << "Cost: " << calculateCost() << endl;
    cout << "--------------------------------------------" << endl;
  }
