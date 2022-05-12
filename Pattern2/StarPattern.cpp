#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=0;
    while(i<N){
        cout<<"\n";
        int j=1;
        while(j<=N+i){
            if(j>N-i-1)
                cout<<"*";
            else
                cout<<" ";
        
        j++;    
        }
     i++;
    }
  return 0;
}