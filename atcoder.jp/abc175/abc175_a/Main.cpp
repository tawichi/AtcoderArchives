#include <iostream>
using namespace std;

int main(){
  string s;
  cin >>s;
  if(s=="RRR") cout<<3<<endl;
  else if(s=="RRS"||s=="SRR") cout<<2<<endl;
  else if(s=="RSS"||s=="RSR"||s=="SRS"||s=="SSR") cout<<1<<endl;
  else cout<<0<<endl;
}