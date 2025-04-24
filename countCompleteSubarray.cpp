#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int countCompleteSubarray(vector<int>& nums){
  unordered_set<int> unique_array;
  for(int num: nums){
    unique_array.insert(num);
  }
  int total_unique = unique_array.size();
  int n = nums.size();
  int count = 0;
  for(int i=0; i<n; i++){
    unordered_set<int> subarray;
    for(int j=i; j<n; j++){
      subarray.insert(nums[j]);

      if(subarray.size() == total_unique){
        count++;
      }
    }
  }
  return count;
}