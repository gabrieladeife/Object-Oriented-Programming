#include <iostream>


//generic function which uses a nested loop to iterate through two arrays. first array is compared to every element in second array, and if any element in first array is greater than any element in the second, the function returns false.
template<typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2){
for(int i = 0; i < size2; i++){
  for (int j = 0; j < size1; j++){
    if (list1[j] > list2[i]) return false;
  }
}
return true;
}

int main() {
  int intArr[3] = {2,2,2};
  int intArr2[4] = {4,4,4,4};
  double doubleArr[3] =  {2.2,2.3,5.0};
  double doubleArr2[4] = {4.0, 4.5, 4.6, 5.1};
  std::string stringArr[3] = {"A", "B", "C"};
  std::string stringArr2[4] = {"D","E","F","G"};


  std::cout << isGreater(intArr2, intArr, 4,3) << std::endl;
  std::cout << isGreater(intArr, intArr2, 3,4) << std::endl;
  std::cout << isGreater(doubleArr2, doubleArr, 4,3) << std::endl;
  std::cout << isGreater(doubleArr, doubleArr2, 3,4) << std::endl;
  std::cout << isGreater(stringArr, stringArr2, 3,4) << std::endl;
  std::cout << isGreater(stringArr2, stringArr, 4,3) << std::endl;

} 