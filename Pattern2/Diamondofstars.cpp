#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    //cout<<"enter n: ";
    cin>>n;
    
  int x=(n+1)/2;  
    for(int i=1 ; i<=x ;i++){
        
        for(int j=1;j<=x-i;j++)
             cout<<" ";  

        for(int j=1;j<=2*i-1;j++)
            cout<<"*";
    
         cout<<"\n";
    }    
    
    for(int i=1 ; i<=n-x ;i++){
        
        for(int j=1 ; j<=i ; j++)
             cout<<" ";
        

        for(int j=1 ; j<=n-2*i ; j++)
            cout<<"*";
        
        cout<<"\n";
  }
}