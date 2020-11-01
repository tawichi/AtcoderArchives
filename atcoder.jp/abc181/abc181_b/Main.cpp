#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  long long sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    long long a,b;
    cin>>a>>b;
    sum+=(a+b)*(b-a+1)/2;
  }
  cout<<sum<<endl;
}