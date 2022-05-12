#include<iostream>
using namespace std;


int main(){
   int i=0,N;
   cin>>N;
   while(i<N){
       cout<<"\n";
       int j=0;
       while(j<N){
            if(j<N-i)
                cout<<N-i;
            else
                cout<<" ";
         
         j++;
       }
    i++;
   }  
}