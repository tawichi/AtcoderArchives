#include <iostream>
using namespace std;
int main(){
  int a,b,c,k;
  int ans = 0;
  cin >> a >> b >> c >> k;
  if (a >= k) ans = k;
  if(a <= k && k<= (a+b)) ans = a;
  if(k >= a+b) ans = 2*a - k + b;
  cout << ans <<endl;
}
    