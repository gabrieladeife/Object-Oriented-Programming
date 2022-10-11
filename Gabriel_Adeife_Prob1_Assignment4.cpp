#include <iostream>

//generic function that checks if array element to the right is less than current element and sets minimum value if true.
template<typename T>
T minArr (T arr[], int size){
  T min = arr[0];
  for(int i = 0; i < size-1; i++){
    if (arr[i+1] < arr[i])
    min = arr[i+1];
  }
  return min;
}

int main() {
  int size = 3;
  int arr[3] = {4,2,5};
  double arr2[3] = {4.2, 2.5, 5.4};
  std::string arr3[3] = {"C", "B", "A"};

  
  std::cout << minArr(arr, size) << std::endl;
  std::cout << minArr(arr2, size) << std::endl;
  std::cout << minArr(arr3, size) << std::endl;
} 