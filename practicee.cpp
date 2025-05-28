#include<iostream>
#include<math.h>
using namespace std;
int Pnums(int n, int n2){
  if(n2==0) return 1;
  return n* Pnums(n,n2-1);

}
int main(){
  cout<<Pnums(2,4);
  return 0;
}