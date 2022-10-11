#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

using namespace std;
class OvernightPackage : public Package{
  public:
  double feePerOz;

  OvernightPackage(const std::string &name, const std::string address, const std::string &city, const std::string &state, int ZIP, double w, double cost, double fee);

  double calculateCost();

  void setOvernightFeePerOunce(double fee);

  void printPackageInfo();




};
#endif
