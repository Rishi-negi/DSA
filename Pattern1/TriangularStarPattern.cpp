#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int i=1;
    while( i<=N ){
        int j=1;
        for( ; j<=i ; j++){
            cout<<"*";
        }
        cout<<"\n";
        i++;
    }
  return 0;
  
}
