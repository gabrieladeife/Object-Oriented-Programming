#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <ctime>


using namespace std;

int main() {
//declares two integer variables
int randOne;
int randTwo;

//srand so rand function properly seeds to generate a random number every time the code is ran 
srand(time(0));

//assigns random numbers to the integer variables and prints their values
randOne = rand() % 10 + 1;
randTwo = rand() % 10 + 1;

cout << "First random number is " << randOne << endl;
cout << "Second random number is " << randTwo << endl;

//checks if randOne is divisible by randTwo and prints the result.
if (randOne % randTwo == 0) cout << randOne << " is divisible by " << randTwo << endl;
else cout << randOne << " is not divisible by " << randTwo << endl;
return 0;
}