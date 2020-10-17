#include<iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
long long N;
long A[100000000];
long a;
long b;
long c = 0;
int main(){  
  cin>>N;
  for (int i = 0; i < N; ++i) cin >> A[i];
  for (int i = 0; i < N; ++i) A[i]=abs(A[i]);
  for (int i = 0; i < N; ++i) a+=A[i];
  for (int i = 0; i < N; ++i) b+=(A[i]*A[i]);
  for (int i = 0; i < N; ++i){
    if(c <= A[i]) c=A[i];
  }
  cout<<a<<endl;
  cout<< fixed << setprecision(10)<<sqrt(b)<<endl;
  cout<<c<<endl;
}