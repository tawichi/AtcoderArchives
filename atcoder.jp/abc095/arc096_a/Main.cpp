#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,x,y;
  cin>>a>>b>>c>>x>>y;
  int ans=0;
  int t=min(x,y);
  ans=t*min(a+b,2*c);
  if(x-t>0) ans+=(x-t)*min(a,2*c);
  if(y-t>0) ans+=(y-t)*min(b,2*c);
  cout<<ans<<endl;
}