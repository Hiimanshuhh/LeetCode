#include <iostream>
using namespace std;
int divide(int dividend, int divisor){
  bool negative = (dividend<0) != (divisor<0);

  dividend = abs(dividend);
  divisor = abs(divisor);

  int count = 0;

  while(dividend>=divisor){
    dividend -=  divisor;
    count++;
  }
  return negative ? -count: count;
}
int main(){
  cout<<divide(58,5);
  return 0;
}