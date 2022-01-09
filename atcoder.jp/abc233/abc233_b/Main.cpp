#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int l, r;
  cin >> l >> r;
  string s;
  cin >> s;
  l--;
  r--;
  for (int i = l; i < r; i++)
  {
    swap(s.at(l), s.at(r));
    l++;
    r--;
  }
  cout << s << endl;
}