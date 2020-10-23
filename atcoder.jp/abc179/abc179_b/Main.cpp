#include<iostream>
using namespace std;

int main(){
  int n,a,b;
  int count=0;
  string ans="No";
  cin >>n;
  for(int i=0; i<n; i++){
    cin>>a>>b;
    if(a==b) count++;
    if(count>=3) ans="Yes";
    if(a!=b) count=0;
    
  }
  cout<<ans;
}