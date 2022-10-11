#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package {
  protected:

  string name;
  string address;
  string city;
  string state;
  int ZIP;
  double weight;
  double cost;
  static int ID;

  public:
   
  Package(const string &name, const string &address, const string &city, const string &state, int ZIP, double weight, double cost);

  void setWeight(double weight);
  void setCostPerOunce(double cost);

  virtual double calculateCost();

  virtual void printPackageInfo();



};
#endif