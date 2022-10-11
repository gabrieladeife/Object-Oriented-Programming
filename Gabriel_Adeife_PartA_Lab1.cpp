#include <iostream>

int main() {
  const double kM = 14;
  double hrs = 45.5/60;
  double mPH = (kM/1.6) / hrs;
  std::cout << "The runner is going at an average speed of approximately " << mPH << " miles per hour" << std::endl;

  return 0;
}