#include<iostream>
using namespace std;

int main(){
  string s;
  string t;
  int count=0;
  cin>>s>>t;
  for(int i=0; i<s.size();i++){
    if(s[i]!=t[i]) count++;
  }
  cout<<count<<endl;
}
 