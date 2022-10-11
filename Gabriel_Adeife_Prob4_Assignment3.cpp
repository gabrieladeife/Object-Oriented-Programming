#include <iostream>
#include <string>

using namespace std;
class Stock{
public:
string symbol;
string name;
double previousClosingPrice;
double currentPrice;

Stock(string &_symbol, string &_name){
symbol = _symbol;
name = _name;
}

string getSymbol() const {
  return symbol;
}

string getName() const {
  return name;
}

double getPreviousClosingPrice() const {
  return previousClosingPrice;
}

double getCurrentPrice() const {
  return currentPrice;
}

double setPreviousClosingPrice(double _pCP) {
  return previousClosingPrice = _pCP;
}

double setCurrentprice(double _cP){
  return currentPrice = _cP;
}

double getChangePercent(){
  return (currentPrice / previousClosingPrice) - 1;
}
};

int main() {
  string name = "Microsoft Corporation";
  string symbol = "MSFT";
  Stock s1(symbol, name);

  s1.setPreviousClosingPrice(27.5);
  s1.setCurrentprice(27.6);

  cout << "Previous Closing Price: " << s1.getPreviousClosingPrice() << endl;

  cout << "Current Price: " << s1.getCurrentPrice() << endl;

  cout << "Percent Change: " << s1.getChangePercent();
}