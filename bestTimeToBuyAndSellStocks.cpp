#include<iostream>
#include<vector>
using namespace std;
void stock(vector<int>arr,int maxProfit){
  for(int i=0; i<arr.size();i++){
    for(int j = i+1; j<arr.size();j++){
      if(arr[j]-arr[i]>maxProfit){
        maxProfit = arr[j] - arr[i];
      }
    }
  }
  cout<<maxProfit;
}
int main(){
  vector<int>arr{7,6,4,3,1};
  stock(arr,0);

  return 0;

}