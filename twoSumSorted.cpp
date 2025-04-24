#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSumSorted(vector<int>numbers,int target){
  int left = 0;
  int right = numbers.size() - 1;
  while(left<right){
    int sum = numbers[left]+numbers[right];
    if(sum==target){
      return {left+1, right+1};
    }else if(sum>target){
      right--;
    }else{
      left++;
    }
  }
  return {};
}
int main(){
  vector<int>nums{1,2,3,4,5,6};
  vector<int> result = twoSumSorted(nums,5);
  return 0;
}