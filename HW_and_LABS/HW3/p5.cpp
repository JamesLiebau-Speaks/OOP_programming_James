#include <iostream>

using std::cout;
using std::endl;
class Stock{
  public:
  Stock(std::string symb, std::string nam){
    setS(symb);
    setN(nam);
  }
  void setS(std::string symb){
    symbol = symb;
  }
  void setN(std::string nam){
    name = nam;
  }
  std::string getS() const{
    return symbol;
  }
  std::string getN() const{
    return name;
  }
  void setPreviousClosingPrice(double pClPr){
    previousClosingPrice = pClPr;
  }
  double getPreviousClosingPrice() const{
    return previousClosingPrice;
  }
  void setCurrentPrice(double cUpR){
    currentPrice = cUpR;
  }
  double getCurrentPrice() const{
    return currentPrice;
  }
  double getChangePercent() const{
    return (currentPrice/previousClosingPrice) - 1;
  }
  private:
  std::string symbol;
  std::string name;
  double previousClosingPrice;
  double currentPrice;
};
int main(void) {
  Stock stock("NVDA", "NVIDIA Corp");
  stock.setPreviousClosingPrice(27.5);

  // Set current price
  stock.setCurrentPrice(27.6);

  // Display stock info
  cout << "Previous Closing Price: " <<
    stock.getPreviousClosingPrice() << endl;
  cout << "Current Price: " <<
    stock.getCurrentPrice() << endl;
  cout << "Percentage Change: " <<
    stock.getChangePercent() << endl;

  return 0;
}
