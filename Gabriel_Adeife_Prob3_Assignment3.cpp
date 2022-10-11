#include <iostream>
#include <iomanip>
class Time{
private:

unsigned int hour, minute, second;

public:
//no arg constructor
 Time(){
 hour = 0;
 minute = 0;
 second = 0;  
 }
//user defined constructor which converts total elasped seconds into the current hour:minute:second
 Time(unsigned int _second){
   second = _second;
   hour = (int)(second / 3600);
   minute  = (int)(second % 3600) / 60;
   second = (int)(_second % 3600) % 60;
 }

//prints the time in universal time format.
 void printUniversal(){
  std::cout << "Universal time is " << std::setfill('0') << std::setw(2) << hour % 24 << ":" << std::setfill('0') << std::setw(2) << minute << ":" << std::setfill('0') << std::setw(2) << second << std::endl;
 }

//prints the time in standard time format.
 void printStandard(){
   if(hour == 0){
        std::cout << "Standard time is " << std::setfill('0') << std::setw(2) << hour + 12 << ":" << std::setfill('0') << std::setw(2) << minute << ":" << std::setfill('0') << std::setw(2) << second << " AM" << std::endl;
        }
    if(hour > 0 && hour < 12){
      std::cout << "Standard time is " << std::setfill('0') << std::setw(2) << hour << ":" << std::setfill('0') << std::setw(2) << minute << ":" << std::setfill('0') << std::setw(2) << second << " AM" << std::endl;
    }
    if(hour > 12) {
      std::cout << "Standard time is " << std::setfill('0') << std::setw(2) << hour % 12 << ":" << std::setfill('0') << std::setw(2) << minute << ":" << std::setfill('0') << std::setw(2) << second << " PM" << std::endl; 
   }
    if(hour == 12) {
     std::cout << "Standard time is " << std::setfill('0') << std::setw(2) << hour << ":" << std::setfill('0') << std::setw(2) << minute << ":" << std::setfill('0') << std::setw(2) << second << " PM" << std::endl;
    }
    std::cout << std::setfill('-') << std::setw(29) << "-" << std::endl;
 }
};

int main() {
  Time t1(55550);
  Time t2;
  Time t3(555550);
  t1.printUniversal();
  t1.printStandard();
  t2.printUniversal();
  t2.printStandard();
  t3.printUniversal();
  t3.printStandard();
}