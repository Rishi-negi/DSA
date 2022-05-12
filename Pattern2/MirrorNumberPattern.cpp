#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  //cout<<"Enter N : ";
  cin>>N;
  int i=1;
  while(i<=N){
      cout<<"\n";
     int K=1;
     for(int j=1 ; j<=N ; j++){
        if(j<=N-i)
           cout<<" ";
        else{
          cout<<K;
          K++;
        }    
     }
     i++;
  }
  return 0;
}
