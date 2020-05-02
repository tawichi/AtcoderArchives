#include<iostream>
using namespace std;

int main(){
  int K, A, B;
  string ans= "NG";
  cin >> K >> A >> B;
  int a = (A/K);
  int b = (B/K);
  if ((b - a) >= 1) ans = "OK";
  if ((A%K) == 0) ans = "OK";
  if ((B%K) == 0) ans = "OK";
  cout << ans << endl;
}