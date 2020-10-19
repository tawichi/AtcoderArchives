#include<iostream>
using namespace std;

int main(){
  string s;
  cin>> s;
  char b=s[s.length()-1];
  if(b=='s') cout<<s+"es"<<endl;
  else cout<<s+"s"<<endl;
}