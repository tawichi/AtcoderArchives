#include<iostream>
using namespace std;
int main(){
  int s, w;
  string ans;
  cin >> s >> w;
  if (s <= w) ans ="unsafe";
  else ans = "safe";
  cout << ans << endl;
}
