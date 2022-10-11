#include <iostream>
#include <iomanip>

int main() {
double distance;
double mpG;
double ppG;

std::cout << "Enter the driving distance: ";
std::cin >> distance;

std::cout << "Enter miles per gallon: ";
std::cin >> mpG;

std::cout << "Enter price per gallon: ";
std::cin >> ppG;

double totalCost = (distance / mpG) * ppG;

std::cout << "The cost of driving is $" << std::setprecision(5) << totalCost << std::endl;
return 0;
}