#include "OvernightPackage.h"
#include <iostream>

using namespace std;

OvernightPackage::OvernightPackage(const std::string &name, const std::string address, const std::string &city, const std::string &state, int ZIP, double w,double cost, double fee) : Package(name,  address, city, state, ZIP, w, cost){
  this->name = name;
  this->address = address;
  this->city = city;
  this->state = state;
  this->ZIP = ZIP;
  this->weight = w;
  this->cost = cost;
  try{
  setOvernightFeePerOunce(fee);
  }
  catch(double ex){
    cout << "Fee must be > 0 " << endl;
  }
  feePerOz = fee;
}

double OvernightPackage::calculateCost(){
  return (feePerOz+cost) * feePerOz;
}

void OvernightPackage::setOvernightFeePerOunce(double fee){
  if (fee < 0) 
  throw fee;

  feePerOz = fee;
}

void OvernightPackage::printPackageInfo(){
  cout << "--------------------------------------------" << endl;
    cout << "Overnight Package ID " << Package::ID << endl << endl ;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", ";
    cout << state << " " << ZIP << endl << endl;
    cout << "Cost: " << calculateCost() << endl;
    cout << "--------------------------------------------" << endl;
}
