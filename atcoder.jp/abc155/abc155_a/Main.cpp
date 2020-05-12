#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >>c ;
  if( (a== b and b==c) or (a!=b and b != c and c != a)) cout << "No" << endl;
  else cout << "Yes" << endl;
}