#include<iostream>
using namespace std;

int N;
int A[201];

int main(){
  cin >> N;
  int counter = 0;
  for (int i = 0; i < N; ++i) cin>>A[i];
  while(true){
    bool exist_even  = false;
    
    for (int i = 0; i < N; ++i){
      
      if (A[i] % 2 != 0) exist_even =true;
    }
   
    if (exist_even)  break;
    for (int i = 0; i < N; ++i){
    A[i] /= 2;
    }
    ++counter;
   
  }
  cout<<counter<<endl;
}
