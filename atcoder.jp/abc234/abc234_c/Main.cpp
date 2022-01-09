#include <bits/stdc++.h>
using namespace std;
long long n, f[100];
int x;
int main()
{
  cin >> n;
  f[1] = 1;
  for (int i = 2; i <= 60; i++)
    f[i] = f[i - 1] * 2;
  for (int i = 60; i >= 1; i--)
    if (n >= f[i])
    {
      x = i;
      break;
    }
  for (int i = x; i >= 1; i--)
  {
    if (n >= f[i])
      cout << 2, n -= f[i];
    else
      cout << 0;
  }
}