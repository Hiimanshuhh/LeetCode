#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> valar(vector<int>arr, int target){
  unordered_map<int,int>map;
  for(int i=0; i<arr.size(); i++){
    int diff = target-arr[i];
    if(map.find(diff)!=map.end()){
      cout<<  map[diff]<< i ;
      break;
    }
    map[arr[i]]=i;
  }
}
int main(){
  vector<int>arr{2,7,11,15};
  valar(arr,9);
  return 0;
}