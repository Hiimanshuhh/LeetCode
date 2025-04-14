#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool checkDup(vector<int>arr){
  unordered_set<int>set;
  for(int i=0; i<arr.size(); i++){
    if(set.count(arr[i])){
      return true;
    }
    set.insert(arr[i]);
  }
  return false;
}
int main(){
  vector<int>arr{1,2,3,4,5,1,2};
  checkDup(arr);
  if(checkDup(arr)){
    cout<<"Duplicate Found!";
  }else{
    cout<<"No Duplicate Found!";
  }
  return 0;
}