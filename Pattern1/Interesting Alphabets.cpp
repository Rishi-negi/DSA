#include<iostream>
using namespace std;
int main(){
   int N;
    //cout<<"ENTER THE n : ";
    cin>>N;
    int i=1;
    char ch='A'+N-1;
    
    while( i<=N ){
        int j=1;
        char ch1=ch;
        for( ; j<=i ; j++){
            cout<<ch1;
            ch1++;
        }
        cout<<"\n";
        ch=ch-1;
        i++;
    }
  return 0; 
}
