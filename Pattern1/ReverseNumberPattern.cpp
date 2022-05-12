#include<iostream>
using namespace std;
int main(){
   int N;
    //cout<<"ENTER THE n : ";
    cin>>N;
    int i=1;
    while( i<=N ){
        int j=i;
        for( ; j>0 ; j--){
            cout<<j;
        }
        cout<<"\n";
        i++;
    }
  return 0; 
}
