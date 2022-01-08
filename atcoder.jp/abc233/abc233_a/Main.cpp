#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, y;
  cin >> x >> y;
  if (x >= y) {
    cout << 0 << endl;
  } else {
  	cout << (y - x) / 10 + ((y - x) % 10 == 0 ? 0 : 1) << endl;
  }
}