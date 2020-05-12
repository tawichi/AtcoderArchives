#include <iostream>
using namespace std;

int main(){
  string n;
  string ans = "No";
  cin >> n;
  for (int  i=0; i < 3; i++){
    if (n[i] == '7') ans ="Yes";
  }
  cout << ans << endl;
}
