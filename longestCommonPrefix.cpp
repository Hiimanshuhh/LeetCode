#include<iostream>
#include<string>
#include<vector>
using namespace std;
string lcp(vector<string> &strgs){
  if(strgs.empty()) return "";
  string prefix = strgs[0];
  for(int i=1; i<strgs.size();i++){
    while(strgs[i].find(prefix) != 0){
      prefix.pop_back();
      if(prefix.empty()){
        return "";
      }
    }
  }
  return prefix;
}
int main() {
  vector<string> strgs = {"flower", "flow", "flight"};
  cout << "Longest Common Prefix: " << lcp(strgs) << endl;
  return 0;
}
