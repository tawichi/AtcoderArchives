#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ans=0;
  for(int i=1;i<=n;i+=2){
    int num_of_divisors =0;
    for(int j=1;j<=i;j++){
      if(i%j==0) num_of_divisors+=1;
    }
    if(num_of_divisors==8) ans++;
  }
  cout<<ans<<endl;
  return 0;
}