#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> fizzBuzz(int n){
  vector<string>ans;
  for(int i=1; i<=n; i++){
    string temp = "";
    
    if(i % 3 == 0)temp += "Fizz";
    if(i % 5 == 0)temp += "Buzz";
    if(temp == "")temp = to_string(i);

    ans.push_back(temp);
  }
  return ans;
}