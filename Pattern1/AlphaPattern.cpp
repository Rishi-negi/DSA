#include<iostream>
using namespace std;
int main(){
   int N;
   // cout<<"ENTER THE n : ";
    cin>>N;
    int i=1;
    char ch='A';
    while( i<=N ){
        int j=1;
        for( ; j<=i ; j++){
            cout<<ch;
        }
        cout<<"\n";
        ch=ch+1;
        i++;
    }
  return 0; 
}
