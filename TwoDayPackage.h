#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"
using namespace std;
class TwoDayPackage : public Package {
  public:
  double flatFee;

  TwoDayPackage(const std::string &name, const std::string address, const std::string &city, const std::string &state, int ZIP, double w, double cost, double fee);

  void setFlatFee(double fee);

  double calculateCost();

  void printPackageInfo();

};
#endif