#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
    while( i<=N ){
        for(int j=1 ; j<=i ; j++){
            cout<<i;
        }
        cout<<"\n";
        i++;
    }
  return 0;  
}
