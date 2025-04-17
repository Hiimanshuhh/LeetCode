#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool validAnargam(string s, string t){
  if(s.length()!=t.length()) return false;
  vector<int>count(26,0);
  for(int i=0; i<s.length();i++){
    count[s[i]-'a']++;
    count[t[i]-'a']--;
  }
  for(int i=0; i<count.size();i++){
    if(count[i]!=0){
      return false;
    }
  }
  return true;
}
int main(){
  string s = "listen";
  string t = "silent";
  cout << boolalpha << validAnargam(s,t) << endl;
  return 0;
}