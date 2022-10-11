#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
  //get user input for number of lines.
  int num;

  cout << "Enter the number of lines ";

  cin >> num;

  //variable for spacing rows.
  int rows = num;
 for(int i = 1; i <= num; i++){
   cout << setw(3);
   //print num amount of spaces to center the point of the triangle.
   for (int h = 0; h < rows; h++){
     cout << setw(3) << " ";
   }
   //reduce the amount of spaces printed after each iteration of i.
  rows = rows -1;


  //prints the numbers of that compose the pyramid, one loop starting from the maximum number, the other from the minimum.
   for(int j = i; j > 0; j--){
     cout << setw(3) << j;

   }
   for (int k = 2 ; k <= i; k++){
     cout << setw(3) << k;
   }
   cout << setw(3) << endl;
 }

}