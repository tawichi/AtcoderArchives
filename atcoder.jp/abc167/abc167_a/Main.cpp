#include <iostream>
using namespace std;

int main(){
  string s,t;
  string ans = "Yes";
  cin >> s >> t;
  for (int i = 0; i < s.length() ; i++){
    if(s[i] != t[i]) ans ="No";
  }
    
  if (t.length() != s.length() + 1) ans = "No";
  cout << ans;
}