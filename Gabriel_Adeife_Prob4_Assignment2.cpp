#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include <cctype>

using namespace std;
int alphaCount[128] = {0};
void count(const string& s){

for(int i = 0; i < s.length(); i++){ 
  if(!isalpha((char)s[i])) continue;
  alphaCount[(s[i])]++;
}
}

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);
  count(str);

  for(int i = 0; i < 128; i++)
if(alphaCount[i] != 0){
cout << (char)i << ":" << " occurs " << alphaCount[i] << endl;
}

return 0;

}