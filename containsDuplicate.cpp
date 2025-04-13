#include<iostream>
#include<vector>
using namespace std;
bool duplicate(vector<int>arr){
  for(int i=0; i<arr.size();i++){
    for(int j=i+1; j<arr.size();j++){
      if(arr[i]==arr[j]){
        return true;
      }
    }
  }
  return false;
}
int main(){
  vector<int>arr={1,2,33,4,5,6,7};
  if(duplicate(arr)){
    cout<<"yes there is duplicate";
  }else{
    cout<<"there is no duplicate";
  }
  return 0;
}