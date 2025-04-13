#include <iostream>
#include <vector>
using namespace std;
void twoSum(vector <int>arr, int target){
  for(int i=0;i<arr.size();i++){
    for(int j=i+1; j<arr.size();j++){
      if((arr[i]+arr[j]) == target){
        cout<<i<<" "<<j;
        return;
      }
    }
  }
}
int main(){
  vector <int> arr = {1,2,3,4,5,6};
  twoSum(arr,5);
  return 0;
}