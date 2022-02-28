#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
signed main()
{
  vector<ll> a(10);
  for (int i = 0; i <= 9; i++)
  {
    cin >> a[i];
  }
  ll num = 0;   //はじめ、画面には 0 が表示されている
  num = a[num]; //ボタンを 1 回押した
  num = a[num]; //ボタンを 2 回押した
  num = a[num]; //ボタンを 3 回押した
  cout << num << endl;
  return 0;
}