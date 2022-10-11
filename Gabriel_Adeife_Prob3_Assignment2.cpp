#include <iostream>
#include <ctype.h>
#include <iomanip>


using namespace std;
int main() {
  int arr[1000];
  int val = 1;
  int maxVal;
  int count;
  int arrLength;

  cout << "Enter numbers: ";
  cin >> val;

  while(val != 0){
    arr[arrLength++] = val;
    cin >> val;
  }
  
  for(int i = 0; i < arrLength; i++){
    if(maxVal < arr[i]){
      maxVal = arr[i];
    }
  }
  
  for (int i = 0; i < arrLength; i++){
    if(arr[i] == maxVal)
    count++;
  }
  cout << "The largest number is " << maxVal << endl << "The occurrence count of the largest number is " << count;
}